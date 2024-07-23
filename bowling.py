def bowling_score(game):
    score = 0
    frame = 1
    for bowl in game:
        if len(bowl) == 1:
            score += int(bowl)
            frame += 1
        elif bowl == 'X':
            score += 10
            frame += 1
        elif bowl == '/':
            score += 10 - 5 + int(game[game.index(bowl)-1])
            frame += 1
        else:
            if len(bowl) > 1 and bowl[0] == 'X':
                score += 10 + int(bowl[1:])
                frame += 1
            elif len(bowl) > 1:
                score += int(bowl[:1]) * 2 + int(bowl[1:])
                frame += 1