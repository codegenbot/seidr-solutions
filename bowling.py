def bowling_score(s):
    score = 0
    frame = 1
    i = 0
    while i < len(s):
        if s[i] == 'X':  
            score += 10
            i += 4
            frame += 1
        elif s[i] == '/':  
            score += 10 - (int(s[i-2]) if i >= 2 else 0)
            i += 3
            frame += 1
        else:
            num = int(s[i])
            i += 1
            if s[i].isdigit()