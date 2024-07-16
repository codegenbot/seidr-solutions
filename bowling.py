```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10 + int(frames[i+1].replace('/', '')) + int(frames[i+2].replace('/', ''))
            i += 3
        elif frames[i] == "/":
            score += 10 + int(frames[i+1].replace('/', ''))
            i += 2
        else:
            frame_score = 0
            for j in range(int(frames[i])):
                if i < len(frames) - 1 and frames[i+1].isdigit():
                    frame_score += 10 - int(frames[i])
                    break
                else:
                    frame_score += 10 - int(frames[i])
            score += frame_score
            i += 2
    return score

print(bowling_score("X5/X/8-7/4/6/9/3/7/2/X"))