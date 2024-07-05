def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)

def check(func):
    lst = [2, 3, 4, 5]  # Example list, you can replace it with the actual list before using check function
    print(func(lst))

check(double_the_difference)