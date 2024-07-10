def cut_vector(vector):
    min_diff = float("inf")
    cut_idx = -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_idx = i
    left_sum = sum(vector[:cut_idx])
    right_sum = sum(vector[cut_idx:])
    if left_sum == right_sum:
        return vector[:cut_idx], vector[cut_idx:]
    return (
        vector[:cut_idx],
        [vector[cut_idx]],
    )


# test the function
print(cut_vector([1, 0]))
print(cut_vector([1, 10]))
print(cut_vector([1, 100]))
print(cut_vector([1, 1000]))
print(cut_vector([1, 10000]))