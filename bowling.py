```
def bowling_score(game):
    score = 0
    game_list = [int(i) if i.isdigit() else i for i in game.replace('-', '/').split(' ')]

    for i in range(0, len(game_list), 1):
        if game_list[i] == 'X':
            score += 10
            if i < len(game_list) - 1 and game_list[i+1] in ['X', '/']:
                score += 10
            elif i < len(game_list) - 2 and game_list[i+1].isdigit() and game_list[i+2].isdigit():
                score += int(game_list[i+1]) + int(game_list[i+2])
        elif game_list[i] == '/':
            if i < len(game_list) - 1 and game_list[i-1].isdigit():
                score += 10 - int(game_list[i-1])
        else:
            score += int(game_list[i])

    return score