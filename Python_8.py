try:
    n, *numbers = [int(x) for x in input().split()]
    if len(numbers) != n:
        raise ValueError
    res = sum(num for num in numbers if num % 2 == 0)
    print(res)
except (ValueError, TypeError):
    print("Input error. Please enter valid input.")