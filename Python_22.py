```
def filter_integers(values: list) -> List[int]:
    return list(filter(lambda x: isinstance(x, int), values))
```