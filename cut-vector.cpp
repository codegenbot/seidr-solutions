[PYTHON]
def cut_vector(vec):
    n = len(vec)
    if n == 0:
        return []
    min_diff = float('inf')
    left_sum = vec[0]
    right_sum = sum(vec[1:])
    diff = abs(left_sum - right_sum)
    if diff <= min_diff:
        result = [0]
    for i in range(1, n-1):
        left_sum += vec[i]
        right_sum -= vec[i]
        diff = abs(left_sum - right_sum)
        if diff <= min_diff:
            result.append(i)
    if n % 2 == 0:
        left_sum = vec[n-1]
        right_sum = sum(vec[:n-1])
        diff = abs(left_sum - right_sum)
        if diff <= min_diff:
            result.append(n-1)
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([]) == []
# Test case 2:
assert cut_vector([1, 2, 3, 4, 5, 6, 7]) == [0, 3, 6]
# Test case 3:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8]) == [0, 3, 6, 7]
# Test case 4:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8, 9]) == [0, 3, 6, 7, 8]
[/TESTS]
