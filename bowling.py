def bowling_score(game):
    game_list = [int(i) if i.isdigit() else i for i in game.replace('-', '/').split(' ')]

    score = 0
    frame = 1

    for i in range(len(game_list)):
        if game_list[i] == 'X':
            score += 10
            frame += 1
        elif game_list[i] == '/':
            score += 10 - game_list[i-1]
            frame += 1
        else:
            if i < len(game_list) - 1 and (game_list[i].isdigit() and game_list[i+1] == 'X'):
                score += int(game_list[i]) + 9
                frame += 2
            elif i < len(game_list) - 1 and (game_list[i].isdigit() and game_list[i+1] == '/'):
                score += int(game_list[i]) + 10 - game_list[i-1]
                frame += 2
            else:
                score += int(game_list[i])

    return score