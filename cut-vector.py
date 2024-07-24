def cut_vector(lst):
    if len(set(lst)) == 1:
        return tuple([lst]), tuple([lst])

    diff_min = float("inf")
    split_index = -1
    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])
        difference = abs(left_sum - right_sum)
        if difference < diff_min:
            diff_min = difference
            split_index = i

    return tuple(lst[:split_index]), tuple(lst[split_index:])


print(cut_vector([1, 0]))
print(cut_vector([1, 10]))
print(cut_vector([1, 100]))
print(cut_vector([1, 1000]))
print(cut_vector([1, 10000]))