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

    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)