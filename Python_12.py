from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

strings = []
while True:
    string = input("Enter a string (or press ENTER to finish): ")
    if string == "":
        break
    strings.append(string)

print(longest(strings))