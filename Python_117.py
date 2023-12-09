```
import re

def select_words(s, n):
    pattern = r"^[a-zA-Z]{n}$"
    return [word for word in s.split() if re.match(pattern, word)]
```