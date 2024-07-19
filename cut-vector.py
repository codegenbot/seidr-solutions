```
def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        left_sum = 0
        for j in range(i+1):
            left_sum += vector[j]
        right_sum = total_sum - left_sum
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return vector[:split_index+1], vector[split_index:]