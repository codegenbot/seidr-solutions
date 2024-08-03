```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames:
        if frame == 'X':
            score += 30
            frame_count += 1
        elif frame == '/':
            score += 10
            frame_count += 1
        else:
            strike = False
            spare = False
            if len(frame) > 1 and frame[0] == 'X' and frame[1:].isdigit():
                strike = True
                frame = frame[2:]
            elif len(frame) > 1 and frame[0].isdigit() and frame[1:] == '/':
                spare = True
                frame = frame[:-1]
            if strike:
                score += int(frame)
                frame_count += 1
            elif spare:
                score += 10 + int(frame)
                frame_count += 1
            else:
                parts = list(map(int, frame))
                score += sum(parts)
                frame_count += 1
    return score if frame_count == 10 else -1