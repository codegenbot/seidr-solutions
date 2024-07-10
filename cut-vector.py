```
def cut_vector(lst):
    avg = sum(lst) / len(lst)
    min_diff = float('inf')
    cut_index = 0

    for i in range(len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        if left_sum >= avg and right_sum <= avg:
            return (lst[:i], lst[i:])
        elif abs(left_sum - avg) < min_diff or abs(right_sum - avg) < min_diff:
            min_diff = abs(left_sum - avg)
            cut_index = i

    left_sum = sum(lst[:cut_index])
    right_sum = sum(lst[cut_index:])

    if left_sum >= avg and right_sum <= avg:
        return (lst[:cut_index], lst[cut_index:])
    else:
        return (lst[:cut_index], lst[cut_index:])


print(cut_vector([1]))
print(cut_vector([1, 10]))
print(cut_vector([1, 100]))
print(cut_vector([1, 1000]))
print(cut_vector([1, 10000]))