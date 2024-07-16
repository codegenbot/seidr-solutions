```
def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    split_index = 0

    for i, num in enumerate(vector):
        left_sum += num

        if left_sum == (total_sum - left_sum):
            return vector[:i+1], vector[i:]
        elif abs(left_sum - (total_sum - left_sum)) < min_diff:
            min_diff = abs(left_sum - (total_sum - left_sum))
            split_index = i

    return vector[:split_index], vector[split_index:]