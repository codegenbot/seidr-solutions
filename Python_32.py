try:
    input_numbers = list(
        map(
            float,
            input("Enter three floating-point numbers separated by space: ").split(),
        )
    )
    if len(input_numbers) != 3:
        raise ValueError
    print("Input accepted successfully.")
except (ValueError, TypeError):
    print(
        "Invalid input. Please enter exactly three floating-point numbers separated by space."
   )