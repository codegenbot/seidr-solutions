```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == 'X':
            score += 10 + int(frames[frame_index+3:frame_index+6].lstrip('X').replace('/', ''), 10)
            frame_index += 4
        elif '/' in frames[frame_index:frame_index+2]:
            strike_index = frames.index('/')
            left_frame = int(frames[strike_index-1] if strike_index > 0 else '0')
            right_frame = int(frames[strike_index+1])
            score += left_frame + right_frame
            frame_index += strike_index + 2
        else:
            left_frame = int(frames[frame_index:frame_index+2].replace('/', ''))
            right_frame = int(frames[frame_index+2:frame_index+4].replace('/', ''))
            if left_frame + right_frame < 10:
                score += left_frame + right_frame
                frame_index += 4
            else:
                score += left_frame + right_frame
                strike_index = frames.index('X', frame_index)
                score += int(frames[strike_index+1:frame_index+3].lstrip('X').replace('/', ''), 10)
                frame_index = strike_index + 1
    return score