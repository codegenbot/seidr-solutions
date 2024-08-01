from typing import List


def filter_by_prefix():
    strings = input("Enter comma-separated list of strings: ").split(',')
    prefix = input("Enter the prefix: ")
    
    return [s.strip() for s in strings if s.strip().startswith(prefix)]


print(filter_by_prefix())