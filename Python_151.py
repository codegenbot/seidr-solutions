def double_the_difference(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) and num >= 0:
            total += num**2
    return total

print(double_the_difference([1, 2, 3]))