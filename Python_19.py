def sort_numbers(numbers: str) -> str:
    numbers = [int(x) for x in numbers.split() if x.isdigit()]
    numbers.sort()
    return " ".join(str(x) for x in numbers)