try:
    n, *numbers = map(int, input().strip().split())
    if len(numbers) != n:
        raise ValueError
    res = [num for num in numbers if num % 2 == 0]
    print(sum(res))
except ValueError:
    print("Input error. Please enter valid input.")