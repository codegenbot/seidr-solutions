[PYTHON]
def calculate_score(bowls: str) -> int:
    score = 0
    num_strikes = 0
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
            num_strikes += 1
        elif num_strikes > 0 and bowls[i] == '/':
            score += 5
            num_strikes -= 1
        elif bowls[i] == '-':
            score -= 5
        else:
            score += int(bowls[i])
    return score
[/PYTHON]
[TESTS]
# Test case 1:
assert calculate_score('') == 0
# Test case 2:
assert calculate_score('X') == 10
# Test case 3:
assert calculate_score('XX') == 20
# Test case 4:
assert calculate_score('XXX') == 30
# Test case 5:
assert calculate_score('XXXXXXXXXXXX') == 90
[/TESTS]
