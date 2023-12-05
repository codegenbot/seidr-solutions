[PYTHON]
def encode_cyclic(s):
    # write your code here
    return s

def decode_cyclic(s):
    # write your code here
    return s

assert decode_cyclic("") == ""
# Test case 2:
assert decode_cyclic("a") == "a"
# Test case 3:
assert decode_cyclic("abc") == "bca"
# Test case 4:
assert decode_cyclic("abcd") == "bcda"
# Test case 5:
assert decode_cyclic("abcde") == "bcdea"
[/PYTHON]
[TESTS]
# Test case 1:
assert decode_cyclic("") == ""
# Test case 2:
assert decode_cyclic("a") == "a"
# Test case 3:
assert decode_cyclic("abc") == "bca"
# Test case 4:
assert decode_cyclic("abcd") == "bcda"
# Test case 5:
assert decode_cyclic("abcde") == "bcdea"
[/TESTS]

```