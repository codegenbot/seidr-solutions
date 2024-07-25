def bowling_score(s):
    score = 0
    frame = 1
    for i in range(len(s)):
        if s[i].isdigit():
            num = int(s[i])
            if s[i + 1].isdigit():
                num += int(s[i + 1])
                if s[i + 2].isdigit():
                    num += int(s[i + 2])
            score += num
            if frame < 10:
                if num == 10:
                    score += 10
                    frame += 1
                elif num < 10:
                    if i + 3 >= len(s):
                        return -1
                    if s[i + 3].isdigit():
                        score += 10 - num
                        frame += 1
                    else:
                        score += 10 - num
                        frame += 1
                else:
                    if i + 4 >= len(s):
                        return -1
                    if s[i + 3].isdigit() and s[i + 4].isdigit():
                        score += 10 - num
                        frame += 1
                    elif s[i + 3].isdigit():
                        score += 10 - num
                        frame += 1
                    else:
                        score += 10 - num
                        frame += 1
    return score