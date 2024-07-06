def find_closest_elements() -> Tuple[float, float]:
    while True:
        user_input = input("Enter two space-separated numbers: ")
        try:
            numbers = [float(num) for num in user_input.split()]
            if len(numbers) != 2:
                print("Please enter exactly two numbers.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter only two numbers separated by spaces.")

    a, b = sorted(
        [abs(x - y) for x, y in zip(sorted(numbers), [numbers[0], numbers[1]])]
    )
    return (
        (numbers[0], numbers[1]) if a == abs(numbers[0] - numbers[1]) else (None, None)
    )