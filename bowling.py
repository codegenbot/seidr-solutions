```python
def calculate_score(bowls):
    score = 0
    frame = 1
    i = 0

    while frame <= 10:
        if bowls[i] == 'X':
            score += 10 + get_bonus(bowls, i, 2)
            i += 1
        elif bowls[i+1] == '/':
            score += 10 + get_bonus(bowls, i, 1)
            i += 2
        else:
            if bowls[i].isdigit() and bowls[i+1].isdigit():
                score += int(bowls[i]) + int(bowls[i+1])
            else:
                score += 0  # treat non-numeric characters as zero score
            i += 2

        frame += 1

    return score


def get_bonus(bowls, i, count):
    bonus = 0
    j = i + 1

    while count > 0:
        if bowls[j] == 'X':
            bonus += 10
        elif bowls[j] == '/':
            bonus += 10 - int(bowls[j-1])
        else:
            bonus += int(bowls[j])

        j += 1
        count -= 1

    return bonus


bowls = input()
score = calculate_score(bowls)
print(score)
```