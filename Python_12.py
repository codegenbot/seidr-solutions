from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string

input_strings = []
input_string = input("Enter a string (press enter to stop): ")
while input_string != "":
    input_strings.append(input_string)
    input_string = input("Enter a string (press enter to stop): ")

result = longest(input_strings)
print(result)