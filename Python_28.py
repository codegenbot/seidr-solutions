```
from typing import List


def concatenate():
    while True:
        strings = input("Please provide some strings (separated by spaces): ").split()
        if strings:
            result = " ".join(strings)
            return result
        print("Please provide some strings")


print(concatenate())