def double_the_difference():
    lst = [int(i) for i in input("Enter the numbers separated by space: ").split()]
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)