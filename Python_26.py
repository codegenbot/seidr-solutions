```
from typing import List


def remove_duplicates():
    num_str = input("Enter space-separated numbers: ")
    numbers = [int(x) for x in num_str.split()]
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result

print(remove_duplicates())