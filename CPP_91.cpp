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
assert is_bored("I am bored.") == 1
# Test case 2:
assert is_bored("I am not bored.") == 0
# Test case 3:
assert is_bored("I am bored. I am bored.") == 2
[/TESTS]
