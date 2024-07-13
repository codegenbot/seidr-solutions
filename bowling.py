```
def bowling_score(s):
    score = 0
    frame_count = 0
    for i in range(len(s)):
        if s[i].isdigit():
            if s[i+1] == '/':
                first_roll = int(s[i])
                second_roll = int(s[i+2])
                score += first_roll + second_roll
                frame_count += 1
            else:
                score += int(s[i])
                frame_count += 1
        elif s[i] == 'X':
            score += 10
            frame_count += 1
    return score