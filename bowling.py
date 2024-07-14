def bowling_game(s):
    s = s.replace("/", "")
    score = 0
    roll_count = 1
    for i in range(len(s)):
        if s[i].isdigit():
            if s[i] == "X":
                score += 10 + (10 - int(s[: i - 1])) * 2
                roll_count = max(roll_count, 2)
            else:
                if roll_count < 3:
                    score += int(s[i]) + (10 - int(s[i])) * 2
                else:
                    if s[i] == "0":
                        continue
                    score += int(s[i])
        elif s[i] == "-":
            roll_count = max(roll_count, 1)
        else:
            roll_count += 1
    return score