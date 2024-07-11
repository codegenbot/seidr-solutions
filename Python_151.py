def double_the_difference():
    lst = list(map(int, input("Enter a series of space-separated integers: ").split()))
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)