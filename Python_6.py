```python
def parse_nested_parens(paren_string: str) -> List[int]:
    return [abs(paren_string.count('(') - paren_string.count(')'))]
```