```
def bowling_score(frames):
    score = 0
    frame_count = 1
    rolls = list(map(int, frames.replace('/', '').replace('X', '10').replace('-', '0')))
    i = 0
    while i < len(rolls):
        if i + 1 < len(rolls) and rolls[i] == 10:
            score += 10
            i += 2
            try_again = 0
            if i < len(rolls):
                try_again = rolls[i]
                i += 1
            if try_again > 0:
                score += try_again
        elif i + 1 < len(rolls) and frames[i] == '/':
            frame_score = sum(rolls[i:i+2])
            score += frame_score
            i += 2
        else:
            frame_score = rolls[i]
            if i + 1 < len(rolls):
                frame_score += rolls[i+1]
            score += frame_score
            i += 1
        if frame_count == 10 and (frame_score == 1 or try_again > 0):
            break
        frame_count += 1
    return score