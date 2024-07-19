try:
    input_numbers = list(map(float, input().split()))
    if len(input_numbers) != 3 or any(
        not isinstance(num, float) for num in input_numbers
    ):
        raise ValueError
    print("Input accepted successfully.")
except (ValueError, TypeError):
    print(
        "Invalid input. Please enter exactly three floating-point numbers separated by space."
   )