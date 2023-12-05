[PYTHON]
def change_base(x, base):
    return str(x) if base == 10 else bin(x)[2:].zfill(len(str(x)))
[/PYTHON]
[TESTS]
# Test case 1:
assert change_base(8, 3) == "22"
# Test case 2:
assert change_base(8, 2) == "1000"
# Test case 3:
assert change_base(7, 2) == "111"
[/TESTS]
