[PYTHON]
def triangle_area(a, b, c):
    if a + b > c and a + c > b and b + c > a:
        return a * b * 0.5
    else:
        return -1
[/PYTHON]
[TESTS]
# Test case 1:
assert triangle_area(3, 4, 5) == 6.0
# Test case 2:
assert triangle_area(1, 2, 3) == -1
# Test case 3:
assert triangle_area(3, 4, 5) == 6.0
[/TESTS]
