```
def fix_spaces(text: str) -> str:
    import re
    return re.sub(r"\s+", "_", text)
```