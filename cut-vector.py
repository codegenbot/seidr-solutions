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

left, right = cut_vector([4378, 3988, 3881, 6155, 8155, 8149, 9971, 7626, 1181, 205])
print(left)
print(right)