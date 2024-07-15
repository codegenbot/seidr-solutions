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


# Read input
paren_string = input()

# Call the function and print the result
print(separate_paren_groups(paren_string))