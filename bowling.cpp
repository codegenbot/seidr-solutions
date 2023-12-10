[PYTHON]
def get_score(bowls: str) -> int:
    score = 0
    for bowl in bowls:
        if bowl == "X":
            score += 10
        elif bowl == "/":
            score += 5
        elif bowl == "-":
            score -= 5
        else:
            score += int(bowl)
    return score
[/PYTHON]
[TESTS]
# Test case 1:
assert get_score("") == 0
# Test case 2:
assert get_score("X") == 10
# Test case 3:
assert get_score("XX") == 20
# Test case 4:
assert get_score("XXX") == 30
# Test case 5:
assert get_score("XXXX") == 40
# Test case 6:
assert get_score("XXXXX") == 50
# Test case 7:
assert get_score("XXXXXX") == 60
# Test case 8:
assert get_score("XXXXXXX") == 70
# Test case 9:
assert get_score("XXXXXXXX") == 80
# Test case 10:
assert get_score("XXXXXXXXX") == 90
[/TESTS]
