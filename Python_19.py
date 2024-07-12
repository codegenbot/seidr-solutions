```
def sort_numbers(numbers: str) -> str:
    return " ".join(map(str, [int(num) for num in numbers.split()]))