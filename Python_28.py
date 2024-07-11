from typing import List


def concatenate():
    num_strings = int(input("Enter the number of strings: "))
    strings = [input(f"Enter string {i+1}: ") for i in range(num_strings)]
    result = ""
    for string in strings:
        result += string
    return result

print(concatenate())