Here is the solution:

def bowling_score(games):
    score = 0
    rolls = [int(x) for x in games.replace('/', '')]
    roll_index = 0
    
    for frame in range(10):
        if rolls[roll_index] == 10:
            score += rolls[roll_index]
            roll_index += 1
        elif rolls[roll_index] + rolls[roll_index+1] >= 10:
            score += 10
            roll_index += 2
        else:
            score += rolls[roll_index]
            if rolls[roll_index+1] == 10:
                roll_index += 2
            else:
                score += rolls[roll_index+1]
                roll_index += 2
    
    return score