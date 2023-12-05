```
def sort_numbers(numbers: str) -> str:
    numberals = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
    numbers = numbers.split()[0].split()
    return " ".join(sorted([number for number in numbers if number in numberals]))
```