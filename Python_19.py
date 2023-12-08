def sort_numbers(numbers: str) -> str:
    numbers = numbers.split()
    numbers = [int(x) for x in numbers]
    return " ".join(str(x) for x in sorted(numbers))