[PYTHON]
def cut_vector(v):
    n = len(v)
    left = 0
    right = n - 1
    while left < right:
        if v[left] == v[right]:
            return [left + 1, right + 1]
        diff = abs(v[left] - v[right])
        if diff > 1:
            return "No solution"
        left += 1
        right -= 1
    return "No solution"
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([1, 0]) == [1, 2]
# Test case 2:
assert cut_vector([1, 10]) == [1, 2]
# Test case 3:
assert cut_vector([1, 100]) == [1, 2]
# Test case 4:
assert cut_vector([1, 1000]) == [1, 2]
# Test case 5:
assert cut_vector([1, 10000]) == [1, 2]
[/TESTS]
