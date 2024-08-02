def check():
    numbers = input("Enter a list of numbers: ").split()
    result = double_the_difference([int(num) for num in numbers])
    print(f"The sum of the squares of positive integers is {result}.")


def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)