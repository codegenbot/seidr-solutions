def find_max_and_min(input_string: str):
    try:
        numbers = [int(x) for x in input_string.split()]
        if len(numbers) < 2:
            return "Error: Please enter at least two numbers"
        max_num = max(numbers)
        min_num = min(numbers)
        return f"Maximum number is {max_num} and minimum number is {min_num}"
    except ValueError:
        return "Error: Please enter valid numbers"