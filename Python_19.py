def sort_numbers(numbers: str) -> str:
    numbers = [int(x) if x.isdigit() else 0 for x in numbers]
    return " ".join(str(x) for x in sorted(numbers))