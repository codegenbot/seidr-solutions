def check():
    numbers = [int(input("Enter a number: ")) for _ in range(5)]
    print(double_the_difference(numbers))


def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)