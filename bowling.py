```
def bowling_score(game):
    score = 0
    game_list = game.split(' ')
    
    for i in range(0, len(game_list), 2):
        if game_list[i] == 'X':
            if i < len(game_list) - 1 and game_list[i+1] == '/':
                score += 10 + int(game_list[i-1])
            else:
                score += 10
        elif game_list[i] == '/':
            score += 10 - int(game_list[i-1])
        else:
            if i < len(game_list) - 1 and game_list[i+1].isdigit():
                score += int(game_list[i]) + int(game_list[i+1])
            else:
                score += int(game_list[i])

    return score

print(bowling_score('9/-39/X3/7/54622325'))