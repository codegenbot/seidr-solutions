def double_the_difference():
    lst = [int(i) for i in input("Enter a list of numbers (space-separated): ").split()]
    odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
    even_sum = sum(i for i in lst if isinstance(i, int))
    return abs(even_sum - odd_sum) * 2