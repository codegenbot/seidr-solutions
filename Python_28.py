from typing import List

def concatenate():
    strings = input("Enter a list of strings (comma separated): ")
    string_list = [s.strip() for s in strings.split(",")]
    return ''.join(string_list).strip()

print(concatenate())