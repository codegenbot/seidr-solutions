try:
    numbers = [int(x) for x in input().split()]
    res = sum(num for num in numbers if num % 2 == 0)
    print(res)
except:
    print("Input error. Please enter valid input.")