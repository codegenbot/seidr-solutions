from typing import List


def concatenate(*args) -> str:
    result = ", ".join(args)
    return result


words = input("Enter words separated by space: ").split()
if words:
    print(concatenate(*words))