```
def bowling_score(game):
    score = 0
    game_list = game.replace('/', 'X').replace('--', '10').split(' ')
    strike_count = game_list.count('X')

    for i in range(len(game_list)):
        if game_list[i] == 'X':
            score += 10
            if strike_count > 1:
                score -= 5
        elif game_list[i].isdigit():
            if len(game_list) - i >= 2 and game_list[i+1].isdigit() and int(game_list[i]) + int(game_list[i+1]) <= 10:
                score += int(game_list[i]) + int(game_list[i+1])
            else:
                score += int(game_list[i])

    return score

print(bowling_score('9/-39/X3/7/54622325'))