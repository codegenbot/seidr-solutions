def double_the_difference():
    lst = list(map(int, input("Enter a list of integers (space separated): ").split()))
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)