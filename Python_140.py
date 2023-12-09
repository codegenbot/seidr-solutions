```
def fix_spaces(text):
    return re.sub(r"\s+", "_", text)
```

def fix_spaces(text, max_replacements=10):
    return re.sub(r"\s+", "_", text, count=max_replacements)
```

