[PYTHON]
def get_score(bowls: str) -> int:
    score = 0
    for ball in bowls:
        if ball == "X":
            score += 10
        elif ball == "/":
            score += 5
        elif ball == "-":
            score -= 5
        else:
            score += int(ball)
    return score
[/PYTHON]
[TESTS]
# Test case 1:
assert get_score("XXXXXXXXXX") == 90
# Test case 2:
assert get_score("52534463X-15/4-8-18") == 175
# Test case 3:
assert get_score("1111111111") == 20
# Test case 4:
assert get_score("9-9-9-9-9-9-9-9-9-9-") == -5
[/TESTS]
