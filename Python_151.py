def check(func):
    lst = [int(i) for i in input("Enter numbers separated by space: ").split()]
    print(func(lst))