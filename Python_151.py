def double_the_difference(odd_sum):
    lst = [int(i) for i in input().split()]
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0) * 2