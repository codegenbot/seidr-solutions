[PYTHON]
def cut_vector(vector):
    n = len(vector)
    if n == 0:
        return []
    min_diff = float('inf')
    left_sum = vector[0]
    right_sum = sum(vector[1:])
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        result = [0, left_sum, right_sum]
    for i in range(1, n-1):
        left_sum += vector[i]
        right_sum -= vector[i]
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
assert cut_vector([1]) == []
# Test case 3:
assert cut_vector([1, 2, 3]) == [1, 2, 3]
# Test case 4:
assert cut_vector([1, 2, 3, 4, 5, 6, 7]) == [3, 10, 7]
[/TESTS]
