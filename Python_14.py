```python
def all_prefixes_and_suffixes(string: str) -> list[str]:
    result = []
    for i in range(len(string)):
        prefix = string[:i+1]
        suffix = string[i+1:]
        result.append(prefix)
        if i < len(string)-1:
            result.append(suffix)
    return result