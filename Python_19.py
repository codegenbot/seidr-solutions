def sort_numbers(numbers: str) -> str:
    try:
        numbers = [int(x) for x in numbers]
        return " ".join(str(x) for x in sorted(numbers))
    except ValueError:
        return "Invalid input"