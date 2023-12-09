def sort_numbers(numbers: str) -> str:
    return " ".join(sorted(numbers.split(), key=lambda x: int(x[-1])))