```
def bowling_score(s):
    score = 0
    roll_count = 1
    for i in range(len(s)):
        if s[i].isdigit():
            if s[i] == 'X':
                score += 10
                roll_count = 1
            elif s[i] == '/':
                prev_roll = int(s[:i-1])
                next_roll = 10 - prev_roll
                score += prev_roll + next_roll
                roll_count = 2
            else:
                if roll_count == 2:
                    score += int(s[i-1])
                    roll_count = 1
                elif roll_count == 1:
                    score += int(s[i])
        elif s[i] == 'X' and i < len(s) - 3:
            score += 10
            roll_count = 1
    return score