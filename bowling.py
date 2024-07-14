```
def bowling_score(game):
    score = 0
    frame = 1
    game += 'X'  # add X at the end for last frame
    while game:
        if game[0] == 'X':  # strike
            score += 10
            game = game[2:]
            if game and game[0].isdigit():
                score += int(game[0])
                game = game[1:]
            else:
                game = ''
        elif game[0] in '/-':  # spare
            score += 10
            game = game[1:]
            if game and game[0].isdigit():
                score += int(game[0])
                game = game[1:]
            else:
                game = ''
        else:  # normal roll
            frame_score = sum(int(char) for char in game[:2])
            score += frame_score
            game = game[2:]
    return score