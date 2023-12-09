```
import re

def fix_spaces(text, max_replacements=10):
    return re.sub(r"\s+", "_", text, count=max_replacements)
```