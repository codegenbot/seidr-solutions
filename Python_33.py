```
def sort_third(l: list):
    l.sort(key=lambda x: '000' if isinstance(x, bool) else str(x).zfill(3) if isinstance(x, int) else x)
    return l

my_list = [4, 7, True, 2, False, 10]
print(sort_third(my_list))