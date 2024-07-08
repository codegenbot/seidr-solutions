```
def bowling_score(frames):
    score = 0
    for frame in frames:
        if "X" * len(frame) == frame: 
            score += 10 + (10 - len([c for c in frame if c != "X"]) ) * 1
        else:
            rolls = [int(c) for c in frame.replace("-", "")]
            if sum(rolls) < 10:
                score += sum(rolls)
            elif "X" in str(rolls):
                score += 10 + (10 - len([c for c in str(rolls) if c != "X"]) ) * 1
            else:
                score += min(sum(rolls), 10) + (10 - min(sum(rolls), 10)) * 1
    return score

frames = [line.strip() for line in input().splitlines()]
print(bowling_score(frames))