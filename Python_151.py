def double_the_difference():
    lst = [int(i) for i in input("Enter numbers separated by space: ").split()]
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    return 2 * (max(lst) - min(lst)) - odd_sum