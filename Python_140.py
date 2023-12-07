
```
import re

def fix_spaces(text):
    replaced = re.sub(r'\s+', '_', text)
    return replaced
```