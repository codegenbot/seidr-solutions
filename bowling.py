def get_score(bowls):
    score = 0
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            # If the current bowl is a strike, add 10 to the score and skip the next two rolls
            score += 10
            i += 2
        elif bowls[i] == '/':
            # If the current bowl is a spare, add 10 - int(bowls[i-1]) to the score
            score += 10 - int(bowls[i-1])
        else:
            # Otherwise, add the score of the current bowl to the total score
            score += int(bowls[i])
    return score