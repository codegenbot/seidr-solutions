```
def bowling_score(frames):
    score = 0
    frame_num = 1
    prev_frame = 0
    for char in frames:
        if char.isdigit():
            frame_score = int(char)
            if frame_num < 10 and sum(map(int, list(frames[:frame_num*2].replace('/', '')))) == 10:
                score += 10
                prev_frame = 10
            else:
                score += frame_score + prev_frame
            frame_num += 1
        elif char == '/':
            score += 10 - int(list(frames[frame_num*2-1].replace('/', ''))[0])
            frame_num += 1
        elif char == 'X':
            score += 10 + 10 - int(list(frames[frame_num*2-1].replace('', ''))[0])
            frame_num += 1
        else:
            if frame_score != 10:
                prev_frame = 10 - int(char)
            frame_score = 10
            score += frame_score
    return score