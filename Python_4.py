try:
    numbers = list(map(float, input("Enter the numbers separated by space: ").split()))
    if any(not isinstance(num, float) for num in numbers):
        raise ValueError
    print(sum(numbers))
except (ValueError, TypeError):
    print("Invalid input. Please enter numbers separated by space.")