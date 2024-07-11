from typing import List


def concatenate():
    strings = input("Please provide some strings (separated by spaces): ").split()
    if not strings:
        return "Please provide some strings"
    
    operation = input("Enter 'space' to concatenate with spaces, or enter any other key to concatenate without: ")
    
    if operation == 'space':
        return " ".join(strings)
    else:
        return "".join(strings)


result = concatenate()
print(result)