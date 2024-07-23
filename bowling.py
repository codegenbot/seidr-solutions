def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else '0' for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i + 1 < len(frames) and (frames[i + 1] == "X" or frames[i + 1] == '/'):
                score += int(frames[i + 1].isdigit() and int(frames[i + 1]) or 0)
            else:
                score += 10
            i += 1
        elif frames[i] == "/":
            score += 10
            if i + 2 < len(frames):
                score += sum(map(int, frames[i+1:i+3]))
            i += 2
        else:
            strike = 0
            for j in range(2):
                if frames[i+j].isdigit():
                    strike += int(frames[i+j])
                elif frames[i+j] == "X":
                    strike += 10
                elif frames[i+j] == "/":
                    strike += 10 - sum(map(int, frames[i+1:i+3]))
            score += strike
            i += 2
    return score