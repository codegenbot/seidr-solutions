import sys
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char in "()":
            temp += char
        else:
            if temp:
                result.append(temp)
                temp = ""
    if temp:
        result.append(temp)
    return result


# Check if input argument is provided
if len(sys.argv) < 2:
    print("Please provide the paren_string as a command line argument.")
    sys.exit(1)

# Get the input from command line argument
paren_string = sys.argv[1]

# Call the function and print the result
print(separate_paren_groups(paren_string))