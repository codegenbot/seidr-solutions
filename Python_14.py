from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i] for i in range(1, len(string) + 1)]

input_string = "example input"  # Provide the input to the program here
result = all_prefixes(input_string)
print(result)