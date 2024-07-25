from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring.lower() in s.lower()]


if __name__ == "__main__":
    user_input = []
    while True:
        user_string = input("Enter a string (or 'stop' to finish): ")
        if user_string.lower() == "stop":
            break
        elif user_string:
            user_input.append(user_string)
        else:
            print("Please enter a non-empty string.")
    substring = (
        input("Enter the substring (or press Enter for 'default_substring'): ")
        or "default_substring"
    )
    if not user_input:
        print("No strings entered. Exiting program.")
    else:
        print(filter_by_substring(user_input, substring))