def bowling_score(game):
    score = 0
    game_list = game.split(' ')
    strike = False

    for i in range(0, len(game_list), 2):
        if game_list[i] == 'X':
            score += 10
            strike = True
        elif game_list[i] == '/':
            score += 10 - int(game_list[i+1])
        else:
            if strike:
                score += 10 + int(game_list[i]) + int(game_list[i+1])
                strike = False
            else:
                score += int(game_list[i]) + int(game_list[i+1])

    return score

print(bowling_score('9/-39/X3/7/54622325'))