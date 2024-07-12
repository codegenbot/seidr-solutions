from typing import list

def filter_by_prefix():
    strings = input("Enter a list of strings separated by commas: ").split(',')
    prefix = input("Enter the prefix to filter: ")
    
    return [s.strip() for s in strings if s.strip().startswith(prefix)]

print(filter_by_prefix())