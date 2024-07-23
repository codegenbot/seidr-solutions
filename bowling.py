```
def bowling_score(game):
    score = 0
    game_list = game.split(' ')
    for i in range(0, len(game_list), 2):
        if game_list[i] == 'X':
            if i < len(game_list) - 1 and game_list[i+1] == '/':
                score += 10 + int(game_list[i+2])
            elif i < len(game_list) - 2 and (game_list[i+2][0] == 'X' or game_list[i+2][1:2] == '/'):
                if i+2 < len(game_list) - 2 and (game_list[i+4][0] == 'X' or game_list[i+4][1:2] == '/'):
                    score += 10 + int(game_list[i+3]) + int(game_list[i+5])
                else:
                    score += 10 + int(game_list[i+3]) + int(game_list[i+2][1:])
            else:
                score += 10 + int(game_list[i+1])
        elif game_list[i] == '/':
            if i < len(game_list) - 1 and game_list[i+1].isdigit():
                score += int(game_list[i-1]) * 2 + int(game_list[i+1])
            else:
                score += 10 + int(game_list[i-1])
        elif game_list[i] == 'X X':
            score += 20
        else:
            if i < len(game_list) - 1 and game_list[i+1].isdigit():
                score += int(game_list[i]) * 2 + int(game_list[i+1])
    return score

print(bowling_score('9/-39/X3/7/54622325'))