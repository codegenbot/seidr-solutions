def mean_absolute_deviation():
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
    mad = sum(abs(x - mean) for x in numbers) / len(numbers)

    print(f"Mean: {mean:.2f}, Mean Absolute Deviation: {mad:.2f}")

    response = input("Do you want to calculate again? (yes/no): ").lower()
    while response != "no":
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
    mad = sum(abs(x - mean) for x in numbers) / len(numbers)

    print(f"Mean: {mean:.2f}, Mean Absolute Deviation: {mad:.2f}")