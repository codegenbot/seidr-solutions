```python
def filter_integers(values: list) -> List[int]:
    return [x for x in values if isinstance(x, int)]
```
This code uses the built-in `list` type instead of trying to import it from a module that may not exist. It also fixes the issue with the `List` type hint by using the correct syntax for type hints in Python.