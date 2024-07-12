```Python
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

if __name__ == "__main__":
    strings = input("Enter space-separated strings (or leave blank): ")
    if strings:
        print(concatenate([s.strip() for s in strings.split()]))
    else:
        print("No strings provided")