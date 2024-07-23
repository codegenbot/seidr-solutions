```
def bowling_score(game):
    score = 0
    i = 0
    while i < len(game):
        if game[i] == 'X':
            score += 10
            i += 1
            if i < len(game) and game[i] == '/':
                score += 10 - int(game[i-1])
                i += 1
        elif game[i] == '/':
            score += 10 - int(game[i-1])
            i += 2
        else:
            frame_score = 0
            if len(game[i]) > 1 and game[i][0] == 'X':
                frame_score = 10 + int(game[i][1:])
            elif len(game[i]) == 2:
                frame_score = int(game[i][0]) * 2 + int(game[i][1])
            else:
                frame_score = int(game[i])

            score += frame_score
            i += 1

    return score