[PYTHON]
def cut_vector(vector):
    # Initialize variables
    n = len(vector)
    result = []
    min_diff = float('inf')
    left_sum = 0
    right_sum = 0
    
    # Loop through the vector and find the optimal cut point
    for i in range(1, n-1):
        left_sum += vector[i-1]
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            result = [i]
        elif diff == min_diff:
            result.append(i)
    
    # Check for the case where the optimal cut point is at the end of the vector
    if n-1 == vector[-1]:
        min_diff = 0
        result = [n-1]
    
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
