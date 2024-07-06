```
def sort_even(l: list):
    sorted_list = []
    for i, x in enumerate(l):
        if i % 2 == 0:
            sorted_list.append(sorted([y for y in l if (i - 1) // 2 % 2 == 0])[::-1][j // 2])
        else:
            sorted_list.append(x)
    return [x for x in sorted_list if isinstance(x, int)]