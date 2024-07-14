Here is the completed code:

def bowling_game(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            strike = False
            if int(s[i:i+2]) == 10:
                if i < len(s) - 1 and s[i+2] != '/':
                    score += 10 + int(s[i+2])
                else:
                    score += 10
                frame += 1
            elif i > 0 and s[i-1].isdigit() and int(s[i-1:i+1]) == 10:
                if frame < 9:
                    score += 10 + int(s[i-1:i+1])
                else:
                    score += 10
                frame += 1
            else:
                score += int(s[i:i+2])
        elif s[i] == '/':
            strike = True
            score += 10
        if not strike and i < len(s) - 1 and s[i+1].isdigit():
            while i < len(s) - 1 and s[i+1] != '/':
                score += int(s[i+1:i+2])
                i += 1
    return score