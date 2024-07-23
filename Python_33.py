```python
def sort_third(lst: list) -> list:
    """Sorts a list by grouping elements into decades and returns the sorted result."""
    return sorted([(i//10, i) for i in lst])