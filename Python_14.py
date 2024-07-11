from typing import List

def all_prefixes():
    string = input("Enter a string: ")
    prefixes = [string[:i] for i in range(1, len(string) + 1)]
    print(prefixes)