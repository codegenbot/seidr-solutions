```
def mean_absolute_deviation() -> float:
    while True:
        try:
            numbers = [
                float(num)
                for num in input("Enter some numbers (space-separated): ").split()
            ]
            break
        except ValueError:
            print("Invalid input. Please enter numbers only.")

    if len(numbers) < 2:
        return sum(numbers) / len(numbers)
    else:
        mean = sum(numbers) / len(numbers)
        mad = round(sum(abs(num - mean) for num in numbers) / len(numbers), 2)
        return mad