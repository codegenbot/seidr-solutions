from typing import List

def all_prefixes():
    s = input("Please enter a string: ")
    return [s[:i] for i in range(1, len(s) + 1)]

print(all_prefixes())