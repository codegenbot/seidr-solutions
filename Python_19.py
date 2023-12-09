```
import re

def sort_numbers(numbers: str) -> str:
    numbers = [int(x) for x in re.findall(r'\d+', numbers)]
    return " ".join(str(x) for x in sorted(numbers))
```