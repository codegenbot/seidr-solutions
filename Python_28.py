```
from typing import List


def concatenate():
    num_strings = int(input("Enter the number of strings (or 0 to stop): "))
    result = ""
    while num_strings > 0:
        strings = [input() for _ in range(num_strings)]
        result += "".join(strings)
        if input("Press enter to continue, or any key to stop: ") == "":
            break
        num_strings = int(input("Enter the number of strings (or 0 to stop), or press enter to stop: "))
    return result if len(result) > 0 else None