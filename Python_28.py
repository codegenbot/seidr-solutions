from typing import List

def concatenate_strings():
    strings = input("Enter a list of strings separated by spaces: ").split()
    result = ''.join(strings)
    print(result)