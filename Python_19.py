```
import re

def sort_numbers(numbers):
    numbers = re.findall(r'\d+', numbers)
    numbers = [int(x) for x in numbers]
    return " ".join(str(x) for x in sorted(numbers))
```