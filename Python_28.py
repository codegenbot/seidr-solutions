from typing import List


def concatenate(input_list: List[str]) -> str:
    while True:
        try:
            if not isinstance(input_list, list):
                raise ValueError("Input must be a list")
            for string in input_list:
                if not isinstance(string, str):
                    raise ValueError("All elements in the list must be strings")

            if len(input_list) == 0:
                user_input = input(
                    "Please provide some input (strings separated by commas): "
                )
                input_list = [i.strip() for i in user_input.split(",")]
            break
        except ValueError as e:
            print(f"Invalid input. Please try again: {e}")

    result = ""
    for string in input_list:
        result += string + " "
    return result.strip()