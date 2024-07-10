def cut_vector(lst):
    if lst[0] == sum(lst[1:]):
        return [lst[0]], lst[1:]

    left_sum = 0
    for i in range(len(lst)):
        right_sum = sum(lst[i:])
        if left_sum == right_sum:
            return [lst[:i+1]], lst[i+1:]
        left_sum += lst[i]
        min_diff = abs(left_sum - right_sum)
        split_idx = i

    return lst[:split_idx], lst[split_idx:]

print(cut_vector([2, 1897, 2594, 1]))