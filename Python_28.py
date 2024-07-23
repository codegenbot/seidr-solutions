def concatenate_strings():
    strings = input("Enter the strings (space-separated): ")
    input_list = strings.split()
    concatenated_str = concatenate(input_list)
    print(f"Concatenated string: {concatenated_str}")


from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    return "".join(strings)