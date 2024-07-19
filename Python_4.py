try:
    numbers = list(map(float, input().strip().split()))
    result = sum(numbers)
    print(result)
except ValueError:
    print("Invalid input")