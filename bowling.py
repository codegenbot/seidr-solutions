```
def bowling_score(s):
    score = 0
    frame = 0
    for i in range(len(s)):
        if s[i].isdigit():
            num = int(s[i])
            if i + 1 < len(s) and s[i + 1].isdigit():
                num += int(s[i + 1])
            if i + 2 < len(s) and s[i + 2].isdigit():
                num += int(s[i + 2])
            if frame < 9:
                if num == 10:  # strike
                    score += num
                    if i + 3 < len(s):
                        score += int(s[i + 3])  # add next two rolls' value
                    frame += 1
                elif num < 10:  # normal roll
                    score += min(num, 10)
                    frame += (num == 10)  # increment frame if a spare
                else:  # two rolls in one frame
                    score += num
                    frame += 1
            else:
                score += num
    return score