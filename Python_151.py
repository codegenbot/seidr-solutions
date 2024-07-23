def check(func):
    input_numbers = [int(x) for x in input("Enter numbers separated by space: ").split()]
    print(func(input_numbers))