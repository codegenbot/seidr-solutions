from typing import List


def concatenate(strings: List[str]) -> str:
    result = " ".join(strings)
    return result


if __name__ == "__main__":
    num_strings = int(input().strip())
    input_strings = [input().strip() for _ in range(num_strings)]

    output = concatenate(input_strings)
    print(output)