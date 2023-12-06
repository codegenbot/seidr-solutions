
[PYTHON]
def is_bored(S):
    count = 0
    for i in range(len(S)):
        if S[i] == 'I' and (S[i + 1] == '.' or S[i + 1] == '?' or S[i + 1] == '!'):
            count += 1
    return count
[/PYTHON]
[TESTS]
# Test case 1:
assert is_bored("You and I are going for a walk") == 0
# Test case 2:
assert is_bored("I am feeling bored") == 1
# Test case 3:
assert is_bored("I am feeling bored. I am going to watch a movie.") == 2
[/TESTS]
