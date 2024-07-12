```
def sort_numbers(numbers: str) -> str:
    return " ".join(map(str, sorted([int(num) for num in numbers.split()])))