def sorted_list_sum(lst):
    if all(i.isnumeric() for i in lst):
        return int(sum(sorted(map(int, lst))))
    else:
        return ''.join(sorted(lst))