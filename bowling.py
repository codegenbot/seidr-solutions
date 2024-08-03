```
def bowling(score):
    total = 0
    frame = 0
    while frame < 10:
        if score[0] == 'X':
            if frame < 9:  # If it's the first throw in a non-last frame
                if score[1] in ['X', '/']:
                    total += 30
                else:
                    total += 20 + int(score[1])
            elif frame == 9:
                total += 30
            frame += 1
            score = score[2:]
        elif score[0] == '/':
            if score[1].isdigit():
                total += int(score[0]) * 10 + int(score[1])
            else:
                total += int(score[0]) * 10
            frame += 1
            score = score[2:]
        else:
            if len(score) >= 3 and all(x.isdigit() for x in score[:3]):
                total += sum(map(int, score[:3]))
                frame += 1
                score = score[3:]
            elif len(score) >= 2 and all(x.isdigit() for x in score[:2]):
                total += int(score[0]) * 10 + int(score[1])
                frame += 1
                score = score[2:]
            else:
                if score[0].isdigit():
                    total += int(score[0]) * 10
                else:
                    total += 10
                frame += 1
                score = score[1:]
    return total