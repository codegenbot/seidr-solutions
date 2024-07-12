def bowling_score(frames):
    score = 0
    frame_count = 1
    rolls = list(map(int, frames.replace('/', '')))
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
                if rolls[i] != 0 and rolls[i+1] != 0:
                    try_again = rolls.pop(i+1) + rolls.pop(i)
                    while rolls and (rolls[0] == 0 or rolls[0] < try_again):
                        score += rolls.pop(0)
            i += 1
        else:
            if len(list(filter(lambda x: x != 0, rolls))) > 0:
                for j in range(len(rolls)):
                    score += rolls.pop()
            break
    return score