```
from typing import List


def remove_duplicates(input_string: str) -> List[int]:
    numbers = list(map(int, ''.join(filter(str.isdigit, input_string)).split(',')))
    return list(set(map(int, numbers)))


result = remove_duplicates(input("Enter your string: "))
print(result)