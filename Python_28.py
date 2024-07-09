from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input("Enter strings (separated by space): ") 
print("Please enter the strings separated by a space: ")
strings = input().split()
print(concatenate(strings))