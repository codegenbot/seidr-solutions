```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

while True:
    try:
        strings_list = []
        for _ in range(5):
            while True:
                string_input = input("Enter a string (or 'stop' to finish): ")
                if string_input.lower() == 'stop':
                    break
                elif not isinstance(string_input.strip(), str):
                    print("Invalid input. Please enter a string.")
                else:
                    strings_list.append(string_input.strip())
                    break
        break
    except ValueError:
        print("Invalid input. Please enter a string.")
        continue

result = longest(strings_list)
print(f"The longest string is: {result}")