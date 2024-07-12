```
def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif diff < min_diff and diff <= (total_sum / 2):
            min_diff = diff
            split_index = i

    return vector[:split_index], vector[split_index:]