def sort_third(lst: list):
    sorted_lst = sorted(zip(lst[::3], lst[1::3], lst[2::3]), key=lambda x: sum(x), reverse=True)
    return [num for group in sorted_lst for num in group]