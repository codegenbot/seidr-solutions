```
```python
def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    
    max_len = 0
    result = None

    for s in map(str, strings):
        if isinstance(s, str) and len(s) > max_len:
            max_len = len(s)
            result = s

    return result
```