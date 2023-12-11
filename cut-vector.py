def cut_vector(vector):
    if len(vector) == 1:
        return vector, []

    left = 0
    right = len(vector) - 1
    min_diff = math.inf
    optimal_index = -1

    while left < right:
        diff = abs(vector[left] - vector[right])
        if diff < min_diff:
            min_diff = diff
            optimal_index = left
        left += 1
        right -= 1

    if optimal_index == -1:
        return [], vector
    else:
        return vector[:optimal_index], vector[optimal_index:]