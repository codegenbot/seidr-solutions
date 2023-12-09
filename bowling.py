```python
def calculate_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == 'X':
            score += 10 + get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index + 1] == '/':
            score += 10 + get_spare_bonus(bowls, bowl_index)
            bowl_index += 2
        else:
            score += get_frame_score(bowls, bowl_index)
            bowl_index += 2
        frame += 1
    return score

def get_strike_bonus(bowls, bowl_index):
    bonus = 0
    for i in range(2):
        if bowls[bowl_index + i + 1] == 'X':
            bonus += 10
        elif bowls[bowl_index + i + 1] == '/':
            bonus += 10 - (0 if i == 1 else int(bowls[bowl_index + i]))
        elif bowls[bowl_index + i + 1] == '-':
            bonus += 0
        else:
            bonus += int(bowls[bowl_index + i])
    return bonus

def get_spare_bonus(bowls, bowl_index):
    bonus = 0
    if bowls[bowl_index + 2] == 'X':
        bonus += 10
    elif bowls[bowl_index + 2] == '-':
        bonus += 0
    else:
        bonus += int(bowls[bowl_index + 2])
    return bonus

def get_frame_score(bowls, bowl_index):
    return (
        0 
        if bowls[bowl_index] == '-' 
        else int(bowls[bowl_index]) 
    ) + (
        0 
        if bowls[bowl_index + 1] == '-' 
        else int(bowls[bowl_index + 1]) 
    )

bowls = input()
print(calculate_score(bowls))
```