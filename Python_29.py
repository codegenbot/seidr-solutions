from typing import List


def filter_by_prefix():
    strings = input("Enter strings (comma-separated): ").split(',')
    prefix = input("Enter prefix: ")
    
    filtered_strings = [s.strip() for s in strings if s.strip().startswith(prefix)]
    
    print(filtered_strings)

filter_by_prefix()