from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(len(string)):
        prefixes.append(string[: i + 1])
    return prefixes

string = "example"  # Replace with your desired input value
prefixes_list = all_prefixes(string)
print(prefixes_list)