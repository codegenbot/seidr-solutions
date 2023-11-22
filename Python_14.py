from typing import List


def all_prefixes(string):
    return [string[: i + 1] for i in range(len(string))]


string = input("Enter a string: ")
prefixes = all_prefixes(string)
print(prefixes)