from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

# Reading input from user
n = int(input("Enter the number of strings: "))
strings = []
for i in range(n):
    s = input("Enter string " + str(i + 1) + ": ")
    strings.append(s)

# Passing input to the `longest` function
result = longest(strings)

# Printing the returned output from the `longest` function
print("Longest string:", result)