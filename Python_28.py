from typing import List


def concatenate(strings: List[str]) -> str:
    print(
        "Enter the strings to be concatenated, each on a new line. Type 'done' when you're finished."
    )
    input_strings = []
    while True:
        user_input = input()
        if user_input.lower() == "done":
            break
        input_strings.append(user_input)
    return "".join(input_strings)