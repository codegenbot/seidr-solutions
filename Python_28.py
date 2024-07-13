from typing import List


def concatenate(input_list: List[str]) -> str:
    if not isinstance(input_list, list):
        raise ValueError("Input must be a list")
    for string in input_list:
        if not isinstance(string, str):
            raise ValueError("All elements in the list must be strings")

    if len(input_list) == 0:
        while True:
            user_input = input("Please provide some input (separated by commas): ")
            try:
                input_list = [s.strip() for s in user_input.split(",")]
                break
            except ValueError:
                print(
                    "Invalid input. Please enter a list of strings separated by commas."
                )

    result = ""
    for string in input_list:
        result += string + " "
    return result.strip()