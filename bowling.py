def bowling_score(frames):
    frames = frames.replace("\n", ",").split(",")
    score = 0
    roll = 0

    while roll < len(frames):
        if frames[roll] == "X":
            score += 10
            roll += 1
        elif "/" in frames[roll]:
            parts = frames[roll].split("/")
            total = int(parts[0]) + int(parts[1].strip())
            score += total
            roll += 2
        else:
            value = frames[roll]
            if value.isdigit():
                score += int(value)
            elif value.startswith("-"):
                score -= 10
            else:
                score += 5
            roll += 1

    return score

print(bowling_score("3/X8--525X27X2161"))