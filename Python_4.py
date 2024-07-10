def mean_absolute_deviation(numbers):
    avg = sum(numbers) / len(numbers)
    return sum(abs(num - avg) for num in numbers) / len(numbers)

while True:
    try:
        numbers = list(map(float, input("Enter numbers separated by space: ").split()))
        if len(numbers) > 0:
            print(mean_absolute_deviation(numbers))
        else:
            print("Invalid input. Please enter at least one number.")
    except ValueError:
        print("Invalid input. Please enter numbers separated by space.")