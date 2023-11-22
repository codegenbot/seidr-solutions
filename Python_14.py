from typing import List

def all_prefixes(strings: List[str]) -> List[List[str]]:
    return [[word[:i+1] for i in range(len(word))] for word in strings]

strings = input("Enter a list of strings (comma-separated): ").strip().split(',')
print(all_prefixes(strings))