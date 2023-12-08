[PYTHON]
def calculate_score(bowling):
    score = 0
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            score += 10
        elif bowling[i] == '/':
            score += 5
        else:
            score += int(bowling[i])
    return score
[/PYTHON]
[TESTS]
# Test case 1:
assert calculate_score('X|7/|9-|X|-8|8/|-6|X|X|X||') == 90
# Test case 2:
assert calculate_score('X|7/|9-|X|-8|8/|-6|X|X|X||') == 90
# Test case 3:
assert calculate_score('X|7/|9-|X|-8|8/|-6|X|X|X||') == 90
[/TESTS]
