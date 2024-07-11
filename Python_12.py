from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    strings = [s for s in strings if isinstance(s, str) and len(str.strip()) > 0]
    return max(strings, key=len) if strings else None

num_strings = int(input("Enter the number of strings: "))
strings = []
for _ in range(num_strings):
    user_input = input("Please enter a string: ")
    while not isinstance(user_input, str): 
        user_input = input("Invalid input. Please enter a string: ")
    strings.append(user_input)
print(longest(strings)) if longest(strings) else print("No strings provided.")