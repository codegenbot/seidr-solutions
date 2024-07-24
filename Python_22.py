```
from typing import List

def process_input() -> List[int]:
    values = input().split()
    return [int(value) for value in values if value.isdigit()]

print(process_input())