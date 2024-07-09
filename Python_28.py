from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input("Enter strings (separated by space): ") # print the prompt before reading the user's input
print("Enter strings (separated by space): ", end='') 
strings = input().split()
print(concatenate(strings))