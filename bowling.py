def bowling_score(s):
    score = 0
    frame = 1
    for char in s:
        if char.isdigit():
            if int(char) == 10:
                score += 10 + (10 - 2) if frame < 9 else 10
                frame += 1
            elif int(char) < 10:
                score += int(char)
                frame += 1
            else:
                continue
        else:
            if char == "/":
                score += 10 - int(s[s.index(char) - 1])
                frame += 1
    return score