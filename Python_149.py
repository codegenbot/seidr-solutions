def sorted_list_sum(lst):
    return sum(
        int(word) for word in sorted([int(word) for word in lst if int(word) % 2 == 0])
    )