from typing import List


def concatenate(strings: List[str]) -> str:
    return " ".join(strings)


if __name__ == "__main__":
    num_strings = int(input())
    input_strings = [input() for _ in range(num_strings)]

    output = concatenate(input_strings)
    print(output)