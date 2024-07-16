```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.replace('-', ' ').split():
        if len(frame) == 1:
            score += int(frame)
            roll = 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll == 1:
                score += first_roll + second_roll
            else:
                if first_roll == 10:
                    score += 10 + (second_roll + next_frame[0]) if len(next_frames) > 0 and next_frames[0].split()[0] != 'X' else 10
                else:
                    score += max(first_roll, second_roll) + min(first_roll, second_roll)
            roll = 0
        elif len(frame) == 3:
            if frame[0] == 'X':
                score += 10 + (int(next_frames.split()[1]) + int(next_frames.split()[2])) if len(next_frames) > 1 else 10
                next_frames = ''
            elif frame[0] == '/':
                first_roll = 10 - int(frame[1:])
                score += first_roll + (int(next_frames.split()[0]) if roll == 1 and len(next_frames) > 0 else 0)
                next_frames = ''
            else:
                score += 10
        next_frames = frames.split().index(frame)+1
    return score