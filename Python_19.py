```python
def sort_numbers(numbers):
    numbers = [int(x) for x in numbers if x.isdigit()]
    return " ".join(str(x) for x in sorted(numbers))
```