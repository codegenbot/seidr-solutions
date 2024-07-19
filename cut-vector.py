```
def cut_vector(vector):
    min_diff = float('inf')
    split_index = 0

    for i in range(len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i:])

        if abs(left_sum - right_sum) < min_diff:
            if left_sum <= right_sum or (left_sum > right_sum and abs(left_sum - len(vector)*min(vector)) <= abs(right_sum - len(vector)*min(vector))):
                min_diff = abs(left_sum - right_sum)
                split_index = i

    return (vector[:split_index], vector[split_index:])