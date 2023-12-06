[PYTHON]
def encode_shift(s):
    s = list(s)
    for i in range(len(s)):
        s[i] = chr((ord(s[i]) - 5 - ord('a') % 26) + ord('a'))
    return "".join(s)
[/PYTHON]
[TESTS]
# Test case 1:
assert encode_shift("hello") == "abcde"
# Test case 2:
assert encode_shift("world") == "bdfgh"
# Test case 3:
assert encode_shift("cpp") == "ebr"
[/TESTS]
