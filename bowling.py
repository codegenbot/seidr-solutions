def bowling_score(frames):
    score = 0
    rolls = list(map(int, frames.replace('/', '')))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10: 
            score += 10
            i += 1
            if i < len(rolls) and rolls[i] == 10:
                i += 2
        elif '/' in frames[i:i+3]: 
            score += 10
            i += 2
        else:
            frame_score = sum(rolls[i:i+2])
            score += frame_score
            if frame_score < 10: 
                for j in range(i+1, len(rolls)):
                    score += rolls[j]
                    i = j
                    break
        i += 1
    return score