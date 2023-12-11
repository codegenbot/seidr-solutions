[PYTHON]
def get_cut_vector(vector):
    left = 0
    right = len(vector) - 1
    while left < right:
        if vector[left] == vector[right]:
            return left + 1, right + 1
        elif abs(vector[left] - vector[right]) <= 1:
            return "No solution"
        left += 1
        right -= 1
    return "No solution"
[/PYTHON]
[TESTS]
# Test case 1:
assert get_cut_vector([5226, 2849]) == (1, 2)
# Test case 2:
assert get_cut_vector([1, 2, 3, 4, 5]) == (1, 5)
# Test case 3:
assert get_cut_vector([1, 2, 3, 4, 5, 6]) == (1, 6)
[/TESTS]
