```
def bowling_score(bowling):
    score = 0
    frame_count = 1
    for i in range(0, len(bowling)):
        if bowling[i].isdigit():
            current_frame_score = int(bowling[i])
            if i + 2 < len(bowling) and bowling[i+1].isdigit() and bowling[i+2].isdigit():
                current_frame_score += int(bowling[i+1]) + int(bowling[i+2])
                i += 2
            elif i + 1 < len(bowling) and bowling[i+1].isdigit():
                current_frame_score += int(bowling[i+1])
                i += 1
        else:
            if bowling[i] == 'X':
                current_frame_score = 10
            elif bowling[i] == '/':
                continue
            frame_count -= 1

        if frame_count > 0:
            score += current_frame_score
    return score