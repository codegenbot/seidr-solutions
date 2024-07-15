try:
    numbers = list(
        map(
            float,
            input("Enter numbers separated by space (e.g. 1.5 -2 3.7): ").split(),
        )
    )
    if numbers:
        result = min(numbers, key=lambda x: abs(x))
        print(result)
    else:
        print("No numbers entered. Please enter valid numbers separated by spaces.")
except ValueError:
    print("Invalid input. Please enter valid numbers separated by spaces.")