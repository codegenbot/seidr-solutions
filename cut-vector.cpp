[PYTHON]
def cut_vector(vector):
    # Initialize variables
    n = len(vector)
    result = []
    min_diff = float('inf')
    left_sum = 0
    right_sum = 0

    # Iterate over each possible cut point
    for i in range(1, n):
        # Calculate the difference between the left and right sums
        diff = abs(left_sum - right_sum)

        # Check if the current cut point is the optimal one
        if diff < min_diff:
            min_diff = diff
            result.clear()
            result.append(i)
        elif diff == min_diff:
            result.append(i)

        # Update the sums
        left_sum += vector[i - 1]
        right_sum += vector[n - i]

    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([1, 2, 3, 4, 5, 6]) == [3]
# Test case 2:
assert cut_vector([1, 2, 3, 4, 5, 6, 7]) == [3, 4]
# Test case 3:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8]) == [3, 4, 5]
[/TESTS]
