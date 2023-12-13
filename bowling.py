def calculate_bowling_score(rolls):
    score = 0
    frame = 1
    roll_index = 0
    
    while frame <= 10:
        if rolls[roll_index] == 'X':
            score += 10
            if frame < 10:
                if rolls[roll_index + 2] == 'X':
                    score += 10
                    if rolls[roll_index + 4] == 'X':
                        score += 10
                    else:
                        score += int(rolls[roll_index + 4])
                else:
                    score += int(rolls[roll_index + 2]) + int(rolls[roll_index + 3])
            else:
                score += int(rolls[roll_index + 2]) + int(rolls[roll_index + 3])
            roll_index += 1
        elif rolls[roll_index + 1] == '/':
            score += 10
            if frame < 10:
                if rolls[roll_index + 4] == 'X':
                    score += 10
                else:
                    score += int(rolls[roll_index + 4])
            else:
                score += int(rolls[roll_index + 4])
            roll_index += 2
        else:
            score += int(rolls[roll_index]) + int(rolls[roll_index + 1])
            roll_index += 2
        
        frame += 1
    
    return score

rolls = input()
print(calculate_bowling_score(rolls))