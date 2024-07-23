def check(func):
    numbers = [int(i) for i in input("Enter the numbers separated by space: ").split()]
    print(func(numbers))