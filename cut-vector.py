```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    left_sum = sum(vector[:1])

    for i in range(1, len(vector)):
        right_sum = sum(vector[:i]) # update right sum

        diff = abs(left_sum - right_sum)

        if (left_sum == right_sum or diff < min_diff):
            min_diff = diff
            split_index = i

        left_sum += vector[i-1]

    return vector[:split_index], vector[split_index:], min_diff