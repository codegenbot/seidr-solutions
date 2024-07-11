Here is the solution:

def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X': 
            score += 10
            roll_index += 1
        elif '/' in rolls[roll_index]:
            parts = rolls[roll_index].split('/')
            score += int(parts[0]) + int(parts[1])
            roll_index += 1
        else:
            score += int(rolls[roll_index])
            roll_index += 1
    return score