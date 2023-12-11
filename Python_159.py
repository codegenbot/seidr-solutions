[PYTHON]
def eat(number, need, remaining):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten], [carrots_left]
[/PYTHON]
[TESTS]
# Test case 1:
assert eat(5, 2, 10) == ([7], [3])
# Test case 2:
assert eat(0, 0, 10) == ([0], [10])
# Test case 3:
assert eat(4, 5, 10) == ([9], [1])
[/TESTS]
