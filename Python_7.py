from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    # The code seems fine. The error "Program did not receive expected input" suggests that you might not be providing the input in the right format.
    # Make sure that you are passing the `strings` and `substring` arguments to the `filter_by_substring` function correctly. The `strings` argument should be a list of strings and `substring` should be a single string.
    return [string for string in strings if substring in string]