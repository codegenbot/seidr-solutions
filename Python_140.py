
```
def fix_spaces(text):
    if not text:
        return ""
    else:
        return re.sub(r"\s+", "_", text)
```
