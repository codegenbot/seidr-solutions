from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        result += string
    return result

if __name__ == "__main__":
    strings_list = input("Enter a list of strings separated by spaces: ")
    strings = [string.strip() for string in strings_list.split()]
    print(concatenate(strings))