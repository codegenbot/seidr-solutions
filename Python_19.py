```
def sort_numbers(numbers: str) -> str:
    numbers = [int(x) for x in numbers.split()]
    return " ".join(str(x) for x in sorted(numbers))
```