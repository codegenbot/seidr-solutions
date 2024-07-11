```
from typing import List

def remove_duplicates() -> List[int]:
    return list(set(input("Enter numbers separated by space: ").split()))

print(remove_duplicates())