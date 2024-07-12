def check():
    numbers = [int(x) for x in input("Enter space-separated integers: ").split()]
    print(double_the_difference(numbers))


def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)