from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


if __name__ == "__main__":
    user_input = []
    while True:
        try:
            user_string = input("Enter a string (or 'stop' to finish): ")
            if user_string.lower() == 'stop':
                break
            user_input.append(user_string)
        except EOFError:
            print("No input provided. Please enter the required inputs.")
            continue

    if not user_input:
        print("No strings entered. No output available.")
    else:
        substring = input("Enter the substring: ")
        print(filter_by_substring(user_input, substring))