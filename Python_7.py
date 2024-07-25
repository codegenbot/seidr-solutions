from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring.lower() in s.lower()]


if __name__ == "__main__":
    user_input = []
    while True:
        user_string = input("Enter a string (or 'stop' to finish): ")
        if user_string.lower() == "stop":
            break
        user_input.append(user_string)
    substring = input("Enter the substring: ") or "default_substring"
    print(filter_by_substring(user_input, substring))