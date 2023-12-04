[PYTHON]
def string_xor(a, b):
    result = ""
    for i in range(len(a)):
        if (a[i] == "1" and b[i] == "0") or (a[i] == "0" and b[i] == "1"):
            result += "1"
        else:
            result += "0"
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert string_xor("010", "110") == "100"
# Test case 2:
assert string_xor("010", "111") == "101"
# Test case 3:
assert string_xor("010", "000") == "010"
[/TESTS]
