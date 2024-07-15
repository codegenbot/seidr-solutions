try:
    numbers = list(
        map(
            int,
            input("Enter numbers separated by space (e.g. 1 -2 3): ").split(),
        )
    )
    if numbers:
        result = min(numbers, key=lambda x: abs(int(x)))
        print(result)
    else:
        print("No numbers entered. Please enter valid numbers separated by spaces.")
except ValueError:
    print("Invalid input. Please enter valid numbers separated by spaces.")