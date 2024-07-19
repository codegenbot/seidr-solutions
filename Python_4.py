try:
    numbers = list(map(float, input().split()))
    print(numbers)
except ValueError:
    print("Invalid input")