from typing import List


def concatenate(strings: List[str]) -> str:
    return " ".join(strings)


if __name__ == "__main__":
    num_strings = int(input("Enter the number of strings: "))
    input_strings = [input("Enter a string: ") for _ in range(num_strings)]

    output = concatenate(input_strings)
    print(output)