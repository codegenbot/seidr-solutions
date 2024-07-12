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
                strings_list.append(string_input.strip())
                if len(strings_list) == 5:
                    break
        break
    except ValueError:
        print("Invalid input. Please enter a valid string.")
        continue

result = longest(strings_list)
print(f"The longest string is: {result}")