def cut_vector(vector):
    left_sum = 0
    right_sum = sum(vector)
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
    return (vector[: split_index + 1], vector[split_index:])


print(cut_vector([int(i) for i in input().split()]))