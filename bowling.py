
[PYTHON]
def get_bowling_score(rolls):
    score = 0
    frame = 1
    for i in range(len(rolls)):
        if rolls[i] == 'X':
            score += 10
            frame += 1
        elif rolls[i] == '/':
            score += 10
            frame += 1
        else:
            score += int(rolls[i])
    
    if rolls[-1] == 'X' or rolls[-1] == '/':
        score += int(rolls[-2]) + int(rolls[-3])
    
    return score
[/PYTHON]
[TESTS]
# Test case 1:
assert get_bowling_score(['X', 'X', 'X']) == 30
# Test case 2:
assert get_bowling_score(['X', 'X', '/']) == 20
# Test case 3:
assert get_bowling_score(['X', 'X', '9']) == 19
# Test case 4:
assert get_bowling_score(['X', 'X', '8', '/']) == 28
# Test case 5:
assert get_bowling_score(['X', 'X', '7', '/', 'X']) == 37
[/TESTS]
```