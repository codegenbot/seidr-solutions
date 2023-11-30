from typing import List

def filter_by_prefix():
    strings = input().split()
    prefix = input()
    return [string for string in strings if string.startswith(prefix)]