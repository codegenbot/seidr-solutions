def bowling_game(s):
    score = 0
    i = 0
    while i < len(s) - 1:
        if s[i] != "/":
            count = 0
            for j in range(i + 1, len(s)):
                if s[j].isdigit():
                    count += 1
                else:
                    break
            score += int(count) * 10
            i = j
        else:
            a, b = map(int, s[i - 1 : i + 1].split("/"))
            score += a + b
            i += 2
    if i < len(s):
        score += int(s[-1])
    return score