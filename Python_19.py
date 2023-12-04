```
def sort_numbers(numbers: str) -> str:
    return " ".join(sorted([int(x) for x in numbers.split()]))
```