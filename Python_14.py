from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    prefixes.append(string)
    for i in range(1, len(string)):
        prefixes.append(string[:i])
    return prefixes

input_string = input()
result = all_prefixes(input_string)
print(result)