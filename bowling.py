def bowling_score(s):
    score = 0
    frame_num = 1
    for char in s:
        if char.isdigit():
            strike = False
            spare = False
            if len(s) == 2 and s[1] == "/":
                spare = True
            elif s[1:3].isdigit() and len(s) >= 3:
                strike = True
            if strike:
                score += 10 + (int(char) * 2)
            elif spare:
                score += 10 + int(char)
            else:
                score += int(char) + (int(s[1]) if s[1].isdigit() else 0)
        elif char == "X":
            score += 10
            frame_num = min(10, frame_num + 1)
        elif char == "/":
            continue
    return score