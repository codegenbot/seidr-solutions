```
def bowling_score(game):
    score = 0
    game_list = [int(i) if i.isdigit() else i for i in game.replace('/', '-').split()]
    frame = 0
    while len(game_list) > 1:
        if game_list[0] == 'X':
            score += 10
            if game_list[1] == 'X':
                score += 10
                game_list.pop(0)
                game_list.pop(0)
            elif game_list[1] in ['/']:
                score += 10 - int(game_list[1][1])
                while game_list[1] in ['/'] or game_list[1].isdigit():
                    if game_list[1] == 'X':
                        score += 10
                        game_list.pop(0)
                    elif game_list[1] in ['/']:
                        score += 10 - int(game_list[1][1])
                        game_list.pop(0)
                    else:
                        score += sum(map(int, game_list[:2]))
                        game_list = game_list[2:]
                game_list.pop(0)
            else:
                frame_score = 10 + sum(map(int, game_list[1:3]))
                game_list = game_list[3:]
        elif game_list[0] in ['/']:
            if game_list[1] == 'X':
                score += 10 - int(game_list[0][1])
                while game_list[1] in ['/'] or game_list[1].isdigit():
                    if game_list[1] == 'X':
                        score += 10
                        game_list.pop(0)
                    elif game_list[1] in ['/']:
                        score += 10 - int(game_list[1][1])
                        game_list.pop(0)
                    else:
                        score += sum(map(int, game_list[:2]))
                        game_list = game_list[2:]
                game_list.pop(0)
                game_list.pop(0)
            else:
                frame_score = 10 - int(game_list[0][1]) + sum(map(int, game_list[1:3]))
                while game_list[1] in ['/'] or game_list[1].isdigit():
                    if game_list[1] == 'X':
                        score += 10
                        game_list.pop(0)
                    elif game_list[1] in ['/']:
                        score += 10 - int(game_list[1][1])
                        game_list.pop(0)
                    else:
                        score += sum(map(int, game_list[:2]))
                        game_list = game_list[2:]
                game_list = game_list[3:]
        else:
            if len(game_list) >= 2 and sum(map(int, game_list[:2])) == 10:
                score += 10
                while game_list[1] in ['/'] or game_list[1].isdigit():
                    if game_list[1] == 'X':
                        score += 10
                        game_list.pop(0)
                    elif game_list[1] in ['/']:
                        score += 10 - int(game_list[1][1])
                        game_list.pop(0)
                    else:
                        score += sum(map(int, game_list[:2]))
                        game_list = game_list[2:]
                game_list = game_list[2:]
            else:
                frame_score = sum(map(int, game_list[:2]))
                while game_list[1] in ['/'] or game_list[1].isdigit():
                    if game_list[1] == 'X':
                        score += 10
                        game_list.pop(0)
                    elif game_list[1] in ['/']:
                        score += 10 - int(game_list[1][1])
                        game_list.pop(0)
                    else:
                        score += sum(map(int, game_list[:2]))
                        game_list = game_list[2:]
                game_list = game_list[2:]
        score += frame_score
    if len(game_list) > 0:
        for i in range(len(game_list)):
            score += int(game_list[i])
    return score