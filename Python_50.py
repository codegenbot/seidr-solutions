[PYTHON]
def decode_shift(s):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])
[/PYTHON]
[TESTS]
# Test case 1:
assert decode_shift("") == ""
# Test case 2:
assert decode_shift("a") == "a"
# Test case 3:
assert decode_shift("b") == "z"
# Test case 4:
assert decode_shift("ab") == "az"
# Test case 5:
assert decode_shift("abc") == "azz"
[/TESTS]

```