from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

# Correctly passing the arguments to the function
input_strings = ["apple", "banana", "orange"]
input_prefix = "a"

output = filter_by_prefix(input_strings, input_prefix)
output