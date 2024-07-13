Here is the modified code:

```
def mean_absolute_deviation(numbers) -> float:
    while True:
        input_str = input("Enter some numbers (space-separated): ")
        if not input_str:  
            print("Please enter at least one number.")
            continue

        try:
            numbers = [float(num) for num in input_str.split()]
            break
        except ValueError:
            print("Invalid input. Please enter numbers only.")

    if len(numbers) < 2:
        return sum(numbers) / len(numbers)
    else:
        mean = sum(numbers) / len(numbers)
        return round(sum(abs(num - mean) for num in numbers) / len(numbers), 2)