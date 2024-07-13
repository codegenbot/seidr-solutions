```
def bowling_score(frames):
    score = 0
    frame_count = 1
    rolls = list(map(int if c.isdigit() else 10 if c == 'X' else int(c) for c in frames.replace('/', '')))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            score += 10
            if frame_count < 10 and (i + 2 >= len(rolls) or rolls[i+1] != 10):
                score += rolls[i+1]
            i += 1
        elif '/' in frames[frames.index(str(rolls[i])):]:
            split = str.split(frames, '/')
            if frame_count == 1 and int(split[0].replace('X', '10').split()[0]) < 2:
                score += 10 + rolls[i+1]
            else:
                score += min(rolls[i], 10)
            i += 1
        elif i + 1 < len(rolls) and rolls[i] + rolls[i+1] == 10:
            score += 10
            i += 2
        else:
            score += sum(rolls[:3])
            del rolls[:3]
        frame_count += 1
    return score