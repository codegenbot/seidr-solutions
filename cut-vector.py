```
def cut_vector(vector):
    min_diff = float("inf")
    split_idx = 0
    prev_sum = sum(vector[:1])

    for i in range(1, len(vector)):
        curr_sum = prev_sum + vector[i] - vector[i-1]
        diff = abs(curr_sum - (sum(vector) - curr_sum))

        if diff < min_diff:
            min_diff = diff
            split_idx = i

        prev_sum = curr_sum

    return vector[:split_idx], vector[split_idx:]