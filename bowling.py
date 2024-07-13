```
def bowling_score(score_string):
    score = 0
    roll_count = 1
    previous_rolls = [0, 0]
    
    for char in score_string + 'X': 
        if char.isdigit():
            current_roll = int(char)
            if roll_count == 2:
                if sum(previous_rolls) < 10:
                    score += 10
                else:
                    score += sum(previous_rolls)
                previous_rolls = [current_roll, 0]
                roll_count = 1
            elif current_roll == 10:
                score += 10 + sum(previous_rolls)
                previous_rolls = [0, 0]
                roll_count = 1
            else:
                if roll_count == 1 and current_roll < 10:
                    previous_rolls[0] = current_roll
                    roll_count += 1
                elif roll_count == 2 and current_roll < 10 + sum(previous_rolls):
                    previous_rolls[1] = current_roll
                    score += sum(previous_rolls)
                    previous_rolls = [0, 0]
                    roll_count = 1
                else:
                    previous_rolls[roll_count-1] = current_roll
                    roll_count += 1
        elif char == 'X':
            if roll_count == 2:
                score += 10 + sum(previous_rolls)
            else:
                score += 10
            previous_rolls = [0, 0]
            roll_count = 1
    return score