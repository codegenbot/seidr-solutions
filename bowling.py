```
def bowling_game(s):
    score = 0
    frame = 1
    for char in s + ' ':
        if char.isdigit():
            strike = (char == 'X')
            spare = False
            if len(s) > frame*2-1 and s[frame*2-1].isdigit() and s[frame*2-1] != 'X':
                spare = True
            if char == 'X' or (not spare and len(s) > frame*2):
                score += 10
            elif spare:
                score += 10 + int(char)
            else:
                score += int(char)
        else:
            if strike:
                score += 10
                if frame < 9:
                    score += int(next(c for c in s[2*frame+1:] if c.isdigit()))
                frame += 1
            elif spare and frame == 9:
                score += 10 + int(char)
            else:
                frame += 1
    return score