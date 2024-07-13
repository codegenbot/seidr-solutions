def sorted_list_sum(lst):
    return sum(int(num) for num in sorted([num for num in "".join(lst).split() if num]))