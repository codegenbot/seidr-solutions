```
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

if __name__ == "__main__":
    try:
        input_list = [i.strip().lower() for i in input("Enter space-separated string: ").split()]
    except ValueError:
        print("Invalid input. Please enter space-separated strings.")
        exit()
    if not input_list:  # Check if the list is empty
        print("Error: List is empty.")
        exit()
    while True:
        prefix = input("Enter prefix: ").strip().lower()
        if len(prefix) > 0:
            break
    print("Please enter a valid prefix" if prefix not in input_list else "") 
    print(filter_by_prefix(input_list, prefix))