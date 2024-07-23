def check(func):
    numbers = [int(x) for x in input("Enter a list of integers separated by space: ").split()]
    print(func(numbers))