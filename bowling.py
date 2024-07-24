```
def bowling_score(game):
    score = 0
    frame_num = 1
    while frame_num <= 10:
        if game[frame_num*2-2:frame_num*2] == 'X':
            score += 30
            frame_num += 1
        elif game[frame_num*2-1:frame_num*2].count('/'):
            left, right = map(int, game[frame_num*2-1:frame_num*2].split('/'))
            if left + right == 10:
                score += left + 10
            else:
                score += left + right
            frame_num += 1
        else:
            first, second = map(int, game[frame_num*2-1:frame_num*2])
            if first + second == 10:
                score += first + 10
            else:
                score += first + second
            frame_num += 1
    return score