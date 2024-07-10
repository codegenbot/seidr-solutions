def sum_of_odd_numbers_in_every_other_element():
    while True:
        try:
            input_str = input(
                "Enter the elements of a list separated by space: (or 'q' to quit) "
            )
            if input_str.lower() == "q":
                break
            numbers = list(map(int, input_str.split()))
            if not numbers:
                raise ValueError("No valid numbers entered.")
            return sum(i for i in numbers[1::2] if i % 2 != 0)
        except ValueError as e:
            print(f"Invalid input: {e}. Please try again.")