from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

while True:
    try:
        n = int(input())
        break
    except ValueError:
        print("Invalid input. Enter an integer value.")

strings = []
for _ in range(n):
    while True:
        s = input()
        if s:
            strings.append(s)
            break
        else:
            print("Invalid input. Enter a non-empty string.")

result = longest(strings)
print(result)