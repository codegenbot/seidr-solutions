[PYTHON]
def get_cut_vector(vector):
    left = 0
    right = len(vector) - 1
    while left < right:
        if vector[left] == vector[right]:
            return [left + 1, right + 1]
        diff = abs(vector[left] - vector[right])
        if diff > 1:
            return "No solution"
        left += 1
        right -= 1
    return "No solution"
[/PYTHON]
[TESTS]
# Test case 1:
assert get_cut_vector([1, 0]) == [1, 2]
# Test case 2:
assert get_cut_vector([1, 10]) == [1, 2]
# Test case 3:
assert get_cut_vector([1, 100]) == [1, 2]
# Test case 4:
assert get_cut_vector([1, 1000]) == [1, 2]
# Test case 5:
assert get_cut_vector([1, 10000]) == [1, 2]
[/TESTS]
