[PYTHON]
def eat(number, need, remaining):
    total = number + need
    hunger = max(total - remaining, 0)
    return [total, remaining - hunger]
[/PYTHON]
[TESTS]
# Test case 1:
assert eat(5, 6, 10) == [11, 4]
# Test case 2:
assert eat(4, 8, 9) == [12, 1]
# Test case 3:
assert eat(1, 10, 10) == [11, 0]
# Test case 4:
assert eat(2, 11, 5) == [7, 0]
[/TESTS]
