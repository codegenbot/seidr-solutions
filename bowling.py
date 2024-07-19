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
                if num == 10:  
                    score += num
                    if i + 3 < len(s):
                        score += int(s[i + 3])  
                    frame += 1
                elif num < 10:  
                    score += min(num, 10)
                    frame += (num == 10) 
                else:  
                    score += num
                    frame += 1
            else:
                score += num
    return score