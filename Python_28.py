from typing import List


def concatenate(strings: List[str]) -> str:
    while True:
        try:
            input_list = [input("Enter strings (separated by comma): ").strip().split(',')]
            break
        except ValueError:
            print("Invalid input. Please enter strings separated by comma.")

    if not input_list[0]:
        return ""
    return "".join(input_list[0])