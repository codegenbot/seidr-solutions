```
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

if __name__ == "__main__":
    input_list = [i.strip().lower() for i in input("Enter space-separated string: ").split()]
    while True:
        prefix = input("Enter prefix: ").strip().lower()
        if prefix:
            break
    print(filter_by_prefix(input_list, prefix))