def check(func):
    lst = list(map(int, input("Enter a list of numbers separated by space: ").split()))
    result = func(lst)
    print(f"The output is {result}")