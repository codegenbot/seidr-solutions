from typing import Optional

def longest_common_substring(str1: str, str2: str) -> Optional[str]:
    m = [[0] * (1 + len(str2)) for _ in range(1 + len(str1))]
    longest, x_longest = 0, 0
    for x in range(1, len(str1) + 1):
        for y in range(1, len(str2) + 1):
            if str1[x - 1] == str2[y - 1]:
                m[x][y] = m[x - 1][y - 1] + 1
                if m[x][y] > longest:
                    longest = m[x][y]
                    x_longest = x
    return str1[x_longest - longest - 1: x_longest]

str1 = input("Enter the first string: ")
str2 = input("Enter the second string: ")

result = longest_common_substring(str1, str2)
print(f"The longest common substring is: {result}")