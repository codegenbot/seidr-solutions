def sort_numbers(numbers: str) -> str:
    numbers = numbers.split()
    numbers.sort(key=lambda x: len(x))
    return " ".join(numbers)