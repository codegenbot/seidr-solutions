def find_max_min(lst):
    max_num = min_num = lst[0]
    for num in lst:
        if num > max_num:
            max_num = num
        elif num < min_num:
            min_num = num
    return (max_num - min_num) * 2


def check(lst):
    return find_max_min(lst)