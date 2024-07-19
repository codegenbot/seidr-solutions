```
```python
def concatenate(strings: list) -> str:
    result = ''
    for string in strings:
        if not isinstance(string, str):
            raise ValueError("All elements of the input list must be strings")
        result += string
    return result
```