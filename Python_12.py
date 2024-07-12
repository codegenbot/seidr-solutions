```
from typing import Optional


def longest_common_substring(str1: str, str2: str) -> Optional[str]:
    if not str1 or not str2:
        return None
    m = [[0] * (len(str2) + 1) for _ in range(len(str1) + 1)]
    longest, x_longest = 0, 0
    for x in range(1, len(str1) + 1):
        for y in range(1, len(str2) + 1):
            if str1[x - 1] == str2[y - 1]:
                m[x][y] = m[x - 1][y - 1] + 1
                if m[x][y] > longest:
                    longest = m[x][y]
                    x_longest = x
    return str1[x_longest - longest: x_longest]


while True:
    str1 = input("Enter the first string: ")

    if set(str1).issubset({"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "_"}):
        break
    else:
        print("Invalid input. Please enter a string that only contains alphanumeric characters and underscores.")

while True:
    str2 = input("Enter the second string: ")

    if set(str2).issubset({"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "_"}):
        break
    else:
        print("Invalid input. Please enter a string that only contains alphanumeric characters and underscores.")

result = longest_common_substring(str1, str2)
print(f"The longest common substring is: {result}")