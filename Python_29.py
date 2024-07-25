```
input_list = input("Enter space-separated string: ").split()
if not input_list:
    print("Please enter at least one string.")
    exit()

from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    filtered_list = [s for s in strings if s.lower().startswith(prefix)]
    return filtered_list

while True:
    prefix = input("Enter prefix: ")
    filtered_list = filter_by_prefix(input_list, prefix)
    if filtered_list:
        print("Found matching strings:")
        print(filtered_list)
        confirm = input("Continue with next prefix? (y/n): ").strip().lower()
        while confirm != 'y':
            if confirm == 'n':
                break
            else:
                print("Error: Invalid input. Please enter y or n.")
                confirm = input("Continue with next prefix? (y/n): ").strip().lower()
    else:
        print("Error: Prefix is not present in the list. Please enter a valid prefix.")