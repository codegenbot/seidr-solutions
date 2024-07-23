def bowling_score(game):
    score = 0
    game_list = [int(i) if i.isdigit() else i for i in game.replace('-', '/').split(' ')]

    for i in range(0, len(game_list), 2):
        if game_list[i] == 'X':
            if i < len(game_list) - 1 and game_list[i+1] == 'X':
                score += 10 + 10
            elif i < len(game_list) - 1 and game_list[i+1] == '/':
                score += 10 + game_list[i-1]
            else:
                score += 10
        elif game_list[i] == '/':
            score += 10 - game_list[i-1]
        else:
            if i < len(game_list) - 1 and game_list[i+1].isdigit():
                score += game_list[i] + game_list[i+1]
            else:
                score += game_list[i]

    return score