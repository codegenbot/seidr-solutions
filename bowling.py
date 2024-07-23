```
def bowling_score(game):
    score = 0
    game_list = [int(i) if i.isdigit() else i for i in game.replace('/', '-').split()]
    
    frame = 1
    while len(game_list) > 0:
        if len(game_list) >= 2 and sum(map(int, game_list[:2])) == 10:
            score += 10
            if len(game_list) > 2 and game_list[1] == 'X':
                score += 10 + int(game_list[-1])
            else:
                score += int(game_list.pop(0)) + int(game_list.pop(0))
        elif game_list[0] == 'X':
            score += 10
            if len(game_list) > 1 and game_list[1] == 'X':
                score += 10
                game_list = game_list[2:]
            else:
                while game_list and game_list[0] != '/':
                    score += int(game_list.pop(0))
        elif game_list[0] in ['/']:
            if len(game_list) > 1 and game_list[1] == 'X':
                score += 10 - int(game_list[0][1]) + 10
                game_list = game_list[2:]
            else:
                score += 10 - int(game_list.pop(0)[1])
                while game_list and game_list[0] != '/':
                    score += int(game_list.pop(0))
        else:
            if len(game_list) >= 2 and sum(map(int, game_list[:2])) == 10:
                score += 10
                game_list = game_list[2:]
            else:
                while len(game_list) > 1:
                    score += int(game_list.pop(0)) + (int(game_list.pop(0)) if len(game_list) > 0 else 0)
        frame -= (len(game_list) - 1) // 2
    return score