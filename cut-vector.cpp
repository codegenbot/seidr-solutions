[PYTHON]
def cut_vector(vector):
    if len(vector) == 0:
        return []
    min_diff = float('inf')
    diff = 0
    left_sum = 0
    right_sum = 0
    for i in range(1, len(vector) - 1):
        left_sum += vector[i - 1]
        right_sum = sum(vector[i + 1:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            result = [i, left_sum, right_sum]
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([]) == []
# Test case 2:
assert cut_vector([1]) == [1, 0, 0]
# Test case 3:
assert cut_vector([1, 2, 3]) == [2, 3, 4]
# Test case 4:
assert cut_vector([1, 2, 3, 4, 5, 6]) == [4, 10, 15]
[/TESTS]
