```
def bowling_score(frames):
    score = 0
    current_roll = ''
    for char in frames:
        if char.isdigit():
            current_roll += char
        elif char == 'X':
            score += 30
            if len(current_roll) > 0:
                score += int(current_roll)
                current_roll = ''
        elif char == '/':
            if len(current_roll) > 0:
                score += int(current_roll) // 2
                current_roll = ''
            score += 10
        else:
            if len(current_roll) > 1:
                if int(current_roll) + 1 == 10:
                    score += 10
                else:
                    score += int(current_roll)
                current_roll = ''
            if char == 'X':
                score += 30
            elif char == '/':
                if len(current_roll) > 0:
                    score += int(current_roll) // 2
                    current_roll = ''
                score += 10
    return score