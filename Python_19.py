```
def sort_numbers(numbers: str) -> str:
    return " ".join(sorted([n for n in numbers.split() if n.isdigit()]))