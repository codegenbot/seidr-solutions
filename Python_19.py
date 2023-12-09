
```
import re
def sort_numbers(numbers):
    numbers = re.findall(r'\d+', numbers)  # Extract only the digits from the input string
    numbers = [int(x) for x in numbers]  # Convert the extracted digits to integers
    return " ".join(str(x) for x in sorted(numbers))
```