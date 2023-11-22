from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    # Check if input string contains matching parentheses
    if paren_string.count("(") != paren_string.count(")"):
        return []

    # Split input string by the closing )( pattern and remove any spaces in each resulting group
    return [group.replace(" ", "") for group in paren_string.split(")(")]