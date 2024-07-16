try:
    numbers = list(map(float, input().split()))
    if not numbers:
        raise ValueError
    print(sum(numbers))
except ValueError:
    print("Invalid input. Please try again.")