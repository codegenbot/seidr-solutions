def filter_integers(values: List[Any]) -> List[int]:
    user_input = input("Enter comma-separated values (e.g., 1,2,3): ")
    entered_values = [int(x) for x in user_input.split(",") if x.isdigit()]
    return [value for value in entered_values if 1 <= value <= 100]