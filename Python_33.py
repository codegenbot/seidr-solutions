def sort_third(l: list):
    l.sort(key=lambda x: '000' if not isinstance(x, int) else str(x).zfill(3))
    return l

my_list = [4, 7, True, 2, False, 10]
print(sort_third(my_list))