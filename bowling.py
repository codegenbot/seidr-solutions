```
def bowling_score(score):
    score = score.replace('/', '')
    total = 0
    frame = 0
    for char in score:
        if char.isdigit():
            if frame < 9 and int(char) == 10:
                total += 10 + (10 - len(str(int(char)))) * 1
                frame += 1
            elif frame < 9 and int(char) <= 10:
                total += int(char)
                frame += 1
            else:
                if char == 'X':
                    total += 10
                    frame += 1
                else:
                    total += int(char) + 10 - len(str(int(char))) * 1
                    frame += 1
        else:
            if frame < 9 and char == 'X':
                total += 10
                frame += 1
            elif frame < 9 and (char == '-' or char == '/'):
                if frame < 8:
                    total += 10 - len(str(int(char))) * 1
                else:
                    total += int(char)
                frame += 1
    return total