from typing import List


def all_prefixes():
    return [
        input("Please enter a string: ")[:i]
        for i in range(1, len(input("Please enter a string: ")) + 1)
    ]


print(all_prefixes())