from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    return paren_string.split(")")


# Test cases
paren_string = "Hello (world). How (are you)?"
assert separate_paren_groups(paren_string) == ["Hello (world", ". How (are you", "?"]

paren_string = "This is a test string"
assert separate_paren_groups(paren_string) == ["This is a test string"]