```
import re
def fruit_distribution(s):
    s = s.lower()
    fruits = ["apple", "banana", "orange", "grapes"]
    for fruit in fruits:
        if re.search(fruit, s):
            return fruit
    return "unknown"