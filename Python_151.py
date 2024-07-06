def double_the_difference():
    lst = [int(x) for x in input("Enter a list of integers: ").split()]
    print(sum(i ** 2 for i in lst if isinstance(i, int) and i > 0))