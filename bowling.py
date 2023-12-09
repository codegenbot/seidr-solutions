```python
def bowling_score(bowls):
    score = 0
    frame = 0
    i = 0

    while i < len(bowls):
        if frame == 9:
            if bowls[i] == 'X':
                score += 10
                score += get_value(bowls[i+1])
                score += get_value(bowls[i+2])
            else:
                score += get_value(bowls[i])
                i += 1
                if bowls[i] == '/':
                    score += 10 - get_value(bowls[i-1])
                else:
                    score += get_value(bowls[i])

                i += 1

        else:
            if bowls[i] == 'X':
                score += 10
                score += get_value(bowls[i+1])
                score += get_value(bowls[i+2])
                i += 1

            elif bowls[i] == '/':
                score += 10 - get_value(bowls[i-1])
                score += get_value(bowls[i+1])
                i += 2

            else:
                score += get_value(bowls[i])
                i += 1
                score += get_value(bowls[i])
                i += 1

        frame += 1

    return score

def get_value(bowl):
    if bowl == 'X' or bowl == '/':
        return 10
    elif bowl == '-':
        return 0
    else:
        return int(bowl)

bowls = input().strip()
print(bowling_score(bowls))
```