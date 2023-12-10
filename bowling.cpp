[PYTHON]
def get_score(bowls: str) -> int:
    score = 0
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
        elif bowls[i] == '/':
            score += 5
        elif bowls[i] == '-':
            score -= 5
        elif bowls[i] == 'S' and bowls[i + 1] == 'P': # new condition to check for strike followed by spare
            score += 10
    return score
[/PYTHON]
[TESTS]
# Test case 1:
assert get_score("") == 0
# Test case 2:
assert get_score("XXXXXXXXXXXX") == 300
# Test case 3:
assert get_score("5/5/5/5/5/5/5/5/5/5") == 150
# Test case 4:
assert get_score("7115XXX548/279-X53") == 145
# Test case 5:
assert get_score("532/4362X179-41447/5") == 100
[/TESTS]
