def bowling_score(frames):
    score = 0
    frame_count = 1
    rolls = list(map(lambda x: int(x) if x != 'X' and x != '-' else 10, frames.replace('/', '')))
    i = 0
    while i < len(rolls):
        if i + 1 < len(rolls) and rolls[i] == 10:
            score += rolls[i]
            i += 2
        elif i + 1 < len(rolls):
            frame_score = rolls[i] + rolls[i+1]
            if frame_score == 10:
                score += frame_score
                i += 2
            else:
                score += frame_score
                i += 1
        else:
            while rolls and (rolls[0] == 0 or len(list(filter(lambda x: x != 0, rolls))) > 1):
                rolls.pop(0)
            score += sum(rolls)
            break
    return score