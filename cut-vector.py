def cut_vector(lst):
    min_diff = float("inf")
    split_idx = -1
    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])
        if left_sum == right_sum:
            return (lst[:i], lst[i:])

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_idx = i

    left_sum = sum(lst[:split_idx])
    right_sum = sum(lst[split_idx:])
    if left_sum == right_sum:
        return (lst[:split_idx], lst[split_idx:])
    else:
        return (lst[:split_idx], [lst[split_idx]] + lst[split_idx + 1 :])


# test cases
print(cut_vector([1]))  # ([1], [])
print(cut_vector([1, 0]))  # ([1], [0])
print(cut_vector([1, 10]))  # ([1], [10])
print(cut_vector([1, 100]))  # ([1], [100])
print(cut_vector([1, 1000]))  # ([1], [1000])
print(cut_vector([1, 10000]))  # ([1], [10000])