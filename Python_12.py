from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


try:
    n = int(input("Enter the number of strings: "))
except ValueError:
    print("Invalid input. Number of string inputs must be an integer.")
    exit(1)

strings = []
for _ in range(n):
    s = input("Enter a string: ")
    strings.append(s)

result = longest(strings)
print(result)