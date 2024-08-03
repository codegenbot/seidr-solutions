```
def bowling_score(input_str):
    score = 0
    frame = 1
    for char in input_str:
        if char == 'X':
            score += 30
            frame -= 1
        elif char == '/':
            continue
        else:
            strike = False
            if char == 'X' and frame < 10:
                strike = True
            if not strike:
                score += int(char)
            else:
                score += 10 + max(0, 10 - (frame % 2))
        if frame > 9 and score > 100:
            break
    return score