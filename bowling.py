```
def bowling_game(s):
    score = 0
    frame_count = 1
    for char in s:
        if char == 'X':
            score += 30
            frame_count += 1
        elif char.isdigit():
            if len(char) > 1:
                strike_score = int(char)
                score += strike_score
                frame_count += 1
            else:
                digit = int(char)
                if frame_count < 10 and s[s.index(str(digit)) + 1] == '/':
                    continue
                else:
                    score += digit
                    frame_count += (1 if digit != 10 else 2)
        elif char == '/':
            score += 10 - int(s[s.index(char) - 1])
    return score