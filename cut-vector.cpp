
[PYTHON]
def cut_vector(vec):
    n = len(vec)
    if n == 0:
        return []
    min_diff = float('inf')
    left_sum = vec[0]
    right_sum = sum(vec[1:])
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
    for i in range(1, n-1):
        left_sum += vec[i]
        right_sum -= vec[i+1]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
    return [i for i in range(n) if abs(vec[:i+1].sum() - vec[i+1:].sum()) == min_diff]
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([]) == []
# Test case 2:
assert cut_vector([1, 2, 3]) == [1]
# Test case 3:
assert cut_vector([1, 2, 3, 4, 5, 6]) == [1, 3, 5]
[/TESTS]
