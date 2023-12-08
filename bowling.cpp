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

def main():
    user_input = input()
    print(calculate_score(user_input))

main()
[/PYTHON]
[TESTS]
# Test case 1:
assert calculate_score('') == 0
# Test case 2:
assert calculate_score('X|7/|9-|X|-8|8/|-6|X|X|X||') == 133
[/TESTS]
