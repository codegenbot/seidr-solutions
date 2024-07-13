```
def bowling_game(s):
    score = 0
    frame = 1
    for char in s:
        if char == 'X':
            score += 30
            frame -= 1
        elif char.isdigit():
            score += int(char)
        else: 
            if char == '/':
                score += 10 - int(s[s.index(char) - 1])
            frame -= 1
    return score