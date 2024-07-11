from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


strings = [
    input("Please enter a string: \n")
    for _ in range(int(input("Enter the number of strings: \n")))
]
print(longest(strings))

longest_string_length = len(max(strings, key=len))
print(
    f"The longest string is {max(strings, key=len)} with length {longest_string_length}."
)