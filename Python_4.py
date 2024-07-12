```
def mean_absolute_deviation(numbers) -> float:
    while True:
        print("Enter some numbers (space-separated): ")
        try:
            numbers = [float(num) for num in input().split()]
            break
        except ValueError:
            print("Invalid input. Please enter numbers only.")
    
    if len(numbers) < 2:
        print("Please enter at least two numbers.")
    else:
        mean = sum(numbers) / len(numbers)
        return round(sum(abs(num - mean) for num in numbers) / len(numbers), 2)