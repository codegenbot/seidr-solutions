Here is the solution:

def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10 + (10 - (i < 18 and game[i+1] == 'X')) * 10
            frame += (game[i:i+2] != 'XX')
        elif game[i] == '/':
            score += 10 + int(game[i+1])
            frame += 1
        else:
            if i < 18 and game[i+1] == 'X' and game[i] in ['7', '8', '9']:
                score += 10 + int(game[i])
                frame += 1
            elif game[i] == '0':
                pass
            else:
                score += int(game[i:i+2])
                frame += (game[i:i+2] != '10')
    return score