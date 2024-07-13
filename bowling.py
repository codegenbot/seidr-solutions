Here is the solution:

def bowling_score(game):
    score = 0
    roll = game.replace('/', '')
    for i in range(10):
        if roll[i*2:i*2+1].isdigit():
            score += int(roll[i*2:i*2+1])
        elif roll[i*2:i*2+2].isdigit():
            score += int(roll[i*2:i*2+2]) + 10
        else:
            if i < 9 and '/' in roll[i*2:i*10]:
                if roll[i*2:i*2].isdigit() and roll[i*2+1:i*3].isdigit():
                    score += int(roll[i*2:i*2]) + int(roll[i*2+1:i*3])
                else:
                    score += 10
            elif i == 9 and '/' in roll[18:]:
                if roll[17:19].isdigit() and roll[19:].isdigit():
                    score += int(roll[17:19]) + int(roll[19:])
                else:
                    score += 10
    return score