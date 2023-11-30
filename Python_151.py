def double_the_difference():
    lst = input("Enter a list of integers: ")
    return sum(x ** 2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)

double_the_difference()