```
def bowling_score(frames):
    score = 0
    frame_count = 1
    for char in frames:
        if char.isdigit():
            strike = False
            spare = False
            if len(frames) - len(frames.lstrip('X')) < 2:
                strike = True
            elif len(frames) - len(frames.rstrip('/')):
                spare = True
            if frame_count == 10:
                break
            if char == 'X':
                score += 30
                frame_count += 1
            elif char == '/':
                score += 10
                frame_count += 1
            else:
                strike_frame = False
                for c in frames[len(frames) - len(frames).lstrip('X') + 1:]:
                    if c.isdigit():
                        strike_frame = True
                    if not strike_frame and c != 'X':
                        break
                if strike_frame:
                    score += int(char)
                else:
                    frame_count += 1
                    score += int(char) + 10
        elif char == 'X':
            score += 30
            frame_count += 1
        elif char == '/':
            score += 10
            frame_count += 1
    return score