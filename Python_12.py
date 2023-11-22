from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

# Prompt for input
input_str = input("Enter a list of strings: ")
# Convert the input string to a list of strings
strings_list = input_str.split(",")
# Call the longest function with the list of strings
result = longest(strings_list)
# Print the result
print("Longest string:", result)