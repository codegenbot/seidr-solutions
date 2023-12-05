[PYTHON]
def cut_vector(vector):
    n = len(vector)
    if n == 0:
        return []
    # Check if the input vector has an odd number of elements
    if n % 2 != 0:
        # Return the middle element as the cut point
        return [vector[n // 2]]
    min_diff = float('inf')
    left_sum = 0
    right_sum = sum(vector)
    for i in range(1, n):
        left_sum += vector[i - 1]
        right_sum -= vector[i - 1]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            result = [i]
        elif diff == min_diff:
            result.append(i)
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([]) == []
# Test case 2:
assert cut_vector([1, 2, 3, 4, 5, 6, 7]) == [3]
# Test case 3:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8]) == [3, 4]
# Test case 4:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8, 9]) == [4, 5]
[/TESTS]
