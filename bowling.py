```
def bowling_score(game):
    score = 0
    game_list = game.split(' ')
    for i in range(0, len(game_list), 2):
        if game_list[i] == 'X':
            score += 10
            if i < len(game_list) - 1:
                score += int(game_list[i+1]) if game_list[i+1][0].isdigit() else 10
        elif game_list[i] == '/':
            frame_score = 10 - int(game_list[i-1])
            score += frame_score + int(game_list[i+1]) if game_list[i+1][0].isdigit() else 10
        else:
            roll1 = int(game_list[i])
            roll2 = int(game_list[i+1])
            if roll1 + roll2 == 10:
                score += 10
            elif roll1 >= 5:
                score += roll1 + roll2
            else:
                score += roll1 * 2
    return score

print(bowling_score('9/-39/X3/7/54622325'))