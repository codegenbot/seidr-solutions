```
def bowling_score(game):
    score = 0
    game_list = [int(x) for x in game.replace('/', '2').replace('X', '10').split()]

    for i in range(0, len(game_list), 2):
        if game_list[i] == 10:
            score += 10
            if i < len(game_list) - 1 and game_list[i+1] >= 8:
                score += game_list[i+1]
            elif i < len(game_list) - 1 and game_list[i+1] >= 2:
                score += 2 + game_list[i+1]
        else:
            score += sum(game_list[i:i+2])
    return score

print(bowling_score('9/-39/X3/7/54622325'))