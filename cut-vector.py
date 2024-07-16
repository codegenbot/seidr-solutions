```
def cut_vector(vector):
    vector.sort()
    min_diff = float("inf")
    split_index = 0
    min_mean_diff = float("inf")

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        mean_left = left_sum / (i + 1e-6)
        mean_right = right_sum / (len(vector) - i - 1e-6)

        diff = abs(mean_left - mean_right)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return vector[:split_index], vector[split_index:]