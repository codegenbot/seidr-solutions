from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i+1] for i in range(len(string))]

def main(string: str):
    prefixes = all_prefixes(string)
    return prefixes

string = input()
prefixes = main(string)
print(prefixes)