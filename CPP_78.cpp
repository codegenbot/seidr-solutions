[PYTHON]
def hex_key(num):
    prime_digits = ["2", "3", "5", "7", "B", "D"]
    count = 0
    for digit in num:
        if digit in prime_digits:
            count += 1
    return count
[/PYTHON]
[TESTS]
# Test case 1:
assert hex_key("AB") == 1
# Test case 2:
assert hex_key("1077E") == 2
# Test case 3:
assert hex_key("ABED1A33") == 4
# Test case 4:
assert hex_key("123456789ABCDEF0") == 6
# Test case 5:
assert hex_key("2020") == 2
[/TESTS]
