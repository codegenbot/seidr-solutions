```python
def sort_numbers(numbers):
    numberals = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
    numbers = [int(number) for number in numbers.split()]
    return sorted(numbers, key=lambda x: numberals[x])
```