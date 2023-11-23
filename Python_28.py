from typing import List


def concatenate(strings: List[str]) -> str:
    result = " ".join(strings)
    return result


if __name__ == "__main__":
    num_strings = int(input("Enter the number of strings: "))
    input_strings = []
    for _ in range(num_strings):
        input_strings.append(input("Enter a string: "))

    output = concatenate(input_strings)
    print(output)