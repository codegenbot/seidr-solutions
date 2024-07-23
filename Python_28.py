def find_max_min():
    numbers = []
    while True:
        try:
            num = float(input("Enter a number (or 'q' to quit): "))
            numbers.append(num)
        except ValueError:
            if input("Please enter a valid number (or 'q' to quit): ") == "q":
                break
    print(
        f"The maximum value is {max(numbers)} and the minimum value is {min(numbers)}"
    )