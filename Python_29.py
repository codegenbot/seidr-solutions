from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = [i.strip().lower() for i in input("Enter space-separated string: ").split()]
while True:
    prefix = input("Enter prefix: ").strip().lower()
    if len(prefix) > 0:
        break
if prefix not in [s for s in strings]:
    print("Error: Prefix is not present in the list. Please enter a valid prefix.")
print(filter_by_prefix(strings, prefix))