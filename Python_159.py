[PYTHON]
def eat(number, need, remaining):
    if remaining <= 0:
        left = 0
        return [total, left]
    
    total = number + need
    left = max(total - remaining, 0)
    return [total, left]
[/PYTHON]
[TESTS]
# Test case 1:
assert eat(10, 5, 20) == [15, 5]
# Test case 2:
assert eat(10, 5, 10) == [15, 0]
# Test case 3:
assert eat(10, 5, 5) == [15, 0]
[/TESTS]
