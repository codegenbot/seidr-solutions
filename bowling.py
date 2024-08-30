```
def bowling_game(s):
    score = 0
    frame_count = 1
    for char in s:
        if char == 'X':
            score += 30
        elif char == '/':
            continue
        else:
            num = int(char)
            if frame_count < 10 and num != 0:
                if frame_count <= 9:
                    if frame_count == 9:
                        score += min(10 + num, 30) - min(num, 10)
                    elif num >= 3 or (num == 2 and (score % 10) >= 8):
                        score += 20 + num
                    else:
                        score += 20 + (10 - (score % 10))
                frame_count += 1
    return score