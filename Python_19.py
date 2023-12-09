```python
def sort_numbers(numbers):
    numbers = sorted(map(int, numbers))
    return " ".join(str(x) for x in numbers)
```