````
def bowling_score(game):
    score = 0
    game_list = game.split(' ')

    frame_score = 0
    for i in range(0, len(game_list), 2):
        if game_list[i] == 'X':
            frame_score += 10
            if i < len(game_list) - 1 and game_list[i+1] != '/':
                score += min(int(game_list[i-1]) + 10, 10)
        elif game_list[i] == '/':
            score += 10 - int(game_list[i-1])
        else:
            frame_score += sum(map(int, game_list[i:i+2]))
            if frame_score >= 10:
                score += frame_score
                frame_score = 0

    return score

print(bowling_score('9/-39/X3/7/54622325'))