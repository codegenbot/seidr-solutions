def cut_vector(vector):
    left = 0
    right = len(vector) - 1
    min_diff = float("inf")
    min_left = 0
    min_right = 0

    while left < right:
        diff = abs(vector[left] - vector[right])
        if diff < min_diff:
            min_diff = diff
            min_left = left
            min_right = right
        if vector[left] < vector[right]:
            left += 1
        else:
            right -= 1

    return (
        vector[: min_left + 1],
        vector[min_left + 1 :],
    )