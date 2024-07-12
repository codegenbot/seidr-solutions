```
def mean_absolute_deviation():
    while True:
        try:
            numbers = [float(num) for num in input("Enter some numbers (space-separated): ").split()]
        except ValueError:
            print("Invalid input. Please enter numbers only.")
            continue
        if len(numbers) < 2:
            print("Please enter at least two numbers.")
            continue
        else:
            mean = sum(numbers) / len(numbers)
            return round(sum(abs(num - mean) for num in numbers) / len(numbers), 2)