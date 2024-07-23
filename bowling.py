def bowling_score(game):
    score = 0
    game_list = game.replace('/', ' ').split(' ')

    for i in range(0, len(game_list), 2):
        if game_list[i] == 'X':
            if i < len(game_list) - 1 and game_list[i+1] == 'X':
                score += 20
            elif i < len(game_list) - 1:
                score += 10 + int(game_list[i-1]) + 10
            else:
                score += 10 + int(game_list[i-1])
        elif game_list[i].isdigit():
            if i < len(game_list) - 1 and game_list[i+1] == 'X':
                score += 10 + int(game_list[i]) + 10
            elif i < len(game_list) - 1:
                score += int(game_list[i]) + int(game_list[i+1])
            else:
                score += int(game_list[i])
        else:
            if i < len(game_list) - 1 and game_list[i+1].isdigit():
                if int(game_list[i-1]) + int(game_list[i]) == 10:
                    score += 10 + int(game_list[i+1])
                else:
                    score += 10 - int(game_list[i-1]) + int(game_list[i])
            elif i < len(game_list) - 1:
                score += 10 - int(game_list[i])

    return score

print(bowling_score('9/-39/X3/7/54622325'))