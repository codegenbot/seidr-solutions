from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i+1] for i in range(len(string.strip()))]

input_string = input("Enter a string: ").strip()
result = all_prefixes(input_string)
print(result)