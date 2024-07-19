try:
    numbers = list(map(float, input().split()))
    result = sum(numbers)
    print(result)
except ValueError:
    print("Invalid input")