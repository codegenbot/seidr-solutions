def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    cut_index = -1

    # Calculate the sum of all elements
    total_sum = sum(vector)

    # Initialize left and right sums
    left_sum = 0
    right_sum = total_sum

    # Iterate through the vector
    for i in range(n - 1):
        # Add current element to the left sum
        left_sum += vector[i]

        # Update right sum
        right_sum -= vector[i]

        # Calculate difference between left and right sums
        diff = abs(left_sum - right_sum)

        # Check if difference is smaller than the minimum difference so far
        if diff < min_diff:
            min_diff = diff
            cut_index = i + 1

    # Split the vector into left and right subvectors
    left_subvector = vector[:cut_index]
    right_subvector = vector[cut_index:]

    return left_subvector, right_subvector