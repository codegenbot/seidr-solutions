import sys
from typing import List


def concatenate(strings: List[str]) -> str:
    result = " ".join(strings)
    return result


if __name__ == "__main__":
    num_strings = int(sys.stdin.readline().strip())
    input_strings = []
    for _ in range(num_strings):
        input_strings.append(sys.stdin.readline().strip())

    output = concatenate(input_strings)
    print(output)