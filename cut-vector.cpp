[PYTHON]
def cut_vector(v):
    left = 0
    right = len(v) - 1
    while left < right:
        if v[left] == v[right]:
            return left + 1, right + 1
        elif abs(v[left] - v[right]) > 1:
            return "No solution"
        left += 1
        right -= 1
    return "No solution"
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([1, 0]) == (1, 2)
# Test case 2:
assert cut_vector([1, 10]) == (1, 2)
# Test case 3:
assert cut_vector([1, 100]) == (1, 2)
# Test case 4:
assert cut_vector([1, 1000]) == (1, 2)
# Test case 5:
assert cut_vector([1, 10000]) == (1, 2)
# Test case 6:
assert cut_vector([1, 100000]) == (1, 2)
# Test case 7:
assert cut_vector([1, 1000000]) == (1, 2)
# Test case 8:
assert cut_vector([1, 10000000]) == (1, 2)
[/TESTS]
