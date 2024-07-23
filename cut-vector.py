def cut_vector(lst):
    min_diff = float("inf")
    indices = []

    for i in range(1, len(lst)):
        diff = abs(sum(lst[:i]) - sum(lst[i:]))

        if diff < min_diff:
            min_diff = diff
            indices = [i]
        elif diff == min_diff:
            indices.append(i)

    left_sum = 0
    right_sum = sum(lst[indices[-1]:])

    for i in range(len(indices)):
        if abs(left_sum - right_sum) <= min_diff:
            return lst[:indices[i]], lst[indices[i]:]
        left_sum += sum(lst[:indices[i]])
        right_sum -= sum(lst[:indices[i]])