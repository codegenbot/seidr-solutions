```
def bowling_game(s):
    score = 0
    roll = 0
    frame_count = 0
    for char in s:
        if char == 'X':
            score += 10
            roll += 2
            frame_count += 1
        elif char == '/':
            continue
        else:
            strike_count = (s.count('X') + s.count('/')) // 2
            if strike_count < 9 - frame_count:
                score += int(char)
                roll += 1
            else:
                if roll > 0:
                    score += max(10 - roll, int(char))
                    roll -= max(10 - roll, int(char))
                else:
                    score += int(char)
    return score