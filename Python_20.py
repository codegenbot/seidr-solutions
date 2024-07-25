try:
    numbers = list(map(float, input().split()))
    if len(numbers) == 0:
        raise ValueError
    print(numbers)
except ValueError:
    print("Error: Input format is incorrect. Please provide space-separated numbers.")