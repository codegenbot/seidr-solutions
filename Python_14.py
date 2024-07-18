from typing import List

def all_prefixes(string: str) -> List[str]:
    if not string.strip():
        return [""]
    else:
        return [string[:i + 1] for i in range(len(string)]

input_string = input("Enter a string: ")

result = all_prefixes(input_string)
print(result)