```
def bowling_score(frames):
    score = 0
    frame_number = 1
    for char in frames:
        if char.isdigit():
            strike = False
            spare = False
            if len(frames) - frames.index(char) < 2:
                if char == 'X':
                    score += 10 + (10 * (frame_number - 1))
                    frame_number += 1
                else:
                    score += int(char) + 10
                    frame_number += 1
            elif char == '/':
                spare = True
                score += 10
                frame_number += 1
            else:
                strike = True
                score += 10
                frame_number += 1
        if strike and not spare:
            score += 10 + (int(frames[frames.index(char) - 2]) * 2)
            frame_number += 1
        elif spare:
            score += 10 + int(char)
            frame_number += 1
    return score