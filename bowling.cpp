[PYTHON]
def get_score(bowls: str) -> int:
    score = 0
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
        elif bowls[i] == '/':
            score += 10 - int(bowls[i-1])
        elif bowls[i] == '-':
            score += 10
        else:
            score += int(bowls[i])
    return score
[/PYTHON]
[TESTS]
# Test case 1:
assert get_score('258/238172X32189-51') == 104
# Test case 2:
assert get_score('XXXXXXXXXXXX') == 90
# Test case 3:
assert get_score('222222222222222222222222222222222222222222222222') == 240
[/TESTS]
