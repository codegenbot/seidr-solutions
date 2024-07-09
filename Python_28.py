from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


def main():
    user_input = input("Enter a list of strings (separated by commas): ")
    input_strings = [s.strip() for s in user_input.split(",")]
    print(concatenate(input_strings))


if __name__ == "__main__":
    main()