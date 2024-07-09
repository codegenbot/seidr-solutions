```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff == min_diff or (diff < min_diff and all(x <= y for x, y in zip(sorted([left_sum, right_sum]), [right_sum, left_sum]))):
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]