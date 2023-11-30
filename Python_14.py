from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(len(string)):
        prefixes.append(string[:i + 1])
    return prefixes

test_input = "example"
prefixes_list = all_prefixes(test_input)
print(prefixes_list)