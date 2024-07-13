```python
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i + 2 < len(frames):
                score += 10 + int(frames[i+1]) + int(frames[i+2])
            else:
                score += 10
            i += 3
        elif frames[i] == "/":
            score += 10
            if i + 2 < len(frames) and frames[i+2].isdigit():
                score += int(frames[i+1]) + int(frames[i+2])
            else:
                score += 10 - (int(frames[i-1]) if i-1 >= 0 and frames[i-1].isdigit() else 0)
            i += 3
        else:
            if len(frames[i:i+2]) == 2:
                frame_score = sum(int(x) for x in frames[i:i+2])
                score += frame_score
            elif len(frames[i:i+3]) == 3 and int(frames[i:i+3].lstrip("0")) < 10:
                frame_score = sum(int(x) for x in frames[i:i+3])
                score += frame_score
            else:
                if i + 1 < len(frames):
                    if sum(int(x) for x in frames[i:i+2]) == 10:
                        score += 10
                    else:
                        score += int(frames[i]) + int(frames[i+1])
                else:
                    score += int(frames[i])
            i += 1
    return score

print(bowling_score("9/4--35/2/2/4-X547-"))