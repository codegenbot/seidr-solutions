try:
    numbers = list(map(float, input().strip().split()))
    if len(numbers) < 4:
        raise ValueError
    result = sum(numbers)
    print(result)
except ValueError:
    print("Invalid input")