def calculate_difference(lst):
    lst.sort()
    return (lst[-1] - lst[0]) * 2

print(calculate_difference([1, 2, 3]))