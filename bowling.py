def bowling_game(s):
    score = 0
    roll = 0
    frame = 1
    for i in range(len(s)):
        if s[i] == "X":
            score += 10 + (10 - int(s[roll - 1 : roll])) * 2
            roll = i + 1
            frame += 1
        elif s[i].isdigit():
            if s[i : i + 2].isdigit() and int(s[i : i + 2]) <= 10:
                score += int(s[i : i + 2]) + (10 - int(s[roll - 1 : roll])) * 2
                roll = i + 2
                frame += 1
            else:
                score += int(s[i])
                if s[i] == "5":
                    roll = i + 1
                    frame += 1
    return score