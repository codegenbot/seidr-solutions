from typing import list

def filter_by_substring():
    strings = input("Enter strings separated by space: ").split()
    substring = input("Enter a substring: ")
    
    result = [s for s in strings if substring in s]
    
    return result


print(filter_by_substring())