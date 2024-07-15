```
def cut_vector(vector):
    median = sorted([x for x in vector])[len(vector)//2]
    left_sum = right_sum = sum(vector)
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        if left_sum <= median:
            diff = abs(left_sum - (sum(vector) - right_sum))
            if diff < min_diff:
                min_diff = diff
                split_index = i
            left_sum += vector[i]
        else:
            right_sum -= vector[i]

    return vector[:split_index + 1], vector[split_index + 1:]