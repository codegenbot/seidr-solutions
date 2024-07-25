```
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

if __name__ == "__main__":
    while True:
        try:
            input_list = [i.strip().lower() for i in input("Enter space-separated string: ").split()]
            if not input_list:
                print("Please enter some strings.")
                continue
            break
        except Exception as e:
            print(f"Invalid input. Please try again. {str(e)}")
    while True:
        prefix = input("Enter prefix: ").strip().lower()
        if prefix:
            break
        print("Prefix cannot be empty. Please enter a valid prefix.")
    print(filter_by_prefix(input_list, prefix))