def get_score(bowls):
    score = 0
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            # Strike, score is 10 plus the next two rolls
            score += 10 + int(bowls[i+1]) + int(bowls[i+2])
        elif bowls[i] == '/':
            # Spare, score is 10 plus the next roll
            score += 10 + int(bowls[i+1])
        else:
            # Regular roll, just add the value to the score
            score += int(bowls[i])
    return score