from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    return paren_string.replace(" ", "").split(")(")


# calling the function with a properly formatted input string
paren_string = input().replace(" ", "")
result = separate_paren_groups(paren_string)
print(result)