def sort_numbers(input_str: str) -> str:
    numbers = [int(num) for num in input_str.split() if num.isdigit()]
    if not numbers:
        return "No numbers found"
    return ' '.join(map(str, sorted(numbers)))