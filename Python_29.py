```
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    filtered_list = [s for s in strings if s.startswith(prefix)]
    return filtered_list

if __name__ == "__main__":
    input_str = input("Enter space-separated string: ")
    input_list = [i.strip().lower() for i in input_str.split() if i]
    if not any(input_list):
        print("Please enter at least one string.")
        exit()
    while True:
        prefix = input("Enter prefix: ").strip().lower()
        if not prefix:  
            print("Error: Prefix cannot be an empty string. Please enter a valid prefix.")
        else:
            filtered_list = filter_by_prefix(input_list, prefix)
            if filtered_list:
                break
            else:
                print("Error: Prefix is not present in the list. Please enter a valid prefix.")
    print(filtered_list)