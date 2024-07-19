```
def bowling_score(frames):
    score = 0
    prev_roll1 = None
    for char in frames:
        if char.isdigit():
            if prev_roll1 == '/':
                score += int(char)
            else:
                score += int(char)
        elif char == '/':
            if (prev_roll1 and int(prev_roll1) + int(char)) <= 10:
                score += int(prev_roll1) + int(char)
            else:
                score += 10 - int(prev_roll1)
        prev_roll1 = char
    return score

print(bowling_score("X45--81818141XX45"))