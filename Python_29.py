```
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

if __name__ == "__main__":
    while True:
        try:
            input_list = [i.strip().lower() for i in input("Enter space-separated string: ").split()]
            break
        except ValueError:
            print("Invalid input. Please enter a space-separated string.")
    while True:
        prefix = input("Enter prefix: ").strip().lower()
        if len(prefix) > 0:
            break
    print(filter_by_prefix(input_list, prefix))