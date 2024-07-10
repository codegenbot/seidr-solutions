from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string))]

while True:
    input_string = input("Enter a string: ").strip()
    if input_string.isalnum():
        print(all_prefixes(input_string))
        break
    else:
        print("Please enter a valid string input.")