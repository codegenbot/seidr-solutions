[PYTHON]
def eat(number, need, remaining):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten], [carrots_left]
[/PYTHON]
[TESTS]
# Test case 1:
assert eat(1, 2, 3) == ([3], [1])
# Test case 2:
assert eat(4, 5, 6) == ([9], [3])
# Test case 3:
assert eat(7, 8, 9) == ([15], [1])
[/TESTS]
