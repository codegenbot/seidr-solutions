def sorted_list_sum(lst):
    lst = [' '.join(map(str, lst))].split()
    return sum(sorted([int(i) for i in lst if not i.startswith('a')]))