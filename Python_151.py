def double_the_difference(lst):
    n = int(input("Enter an integer: "))
    return (sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0) + n) ** 2