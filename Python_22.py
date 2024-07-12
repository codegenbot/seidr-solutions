def filter_integers() -> List[int]:
    while True:
        try:
            values = [int(x) for x in input("Enter integers separated by spaces or commas: ").split()]
            if isinstance(values, list):
                return [value for value in values if isinstance(value, int)]
            else:
                print(f"Invalid input. Please enter a valid list of integers.")
        except ValueError:
            print(f"Invalid input. Please enter a valid list of integers.")