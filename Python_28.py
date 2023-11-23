from typing import List

def concatenate(strings: List[str]) -> str:
    return " ".join(strings)

if __name__ == "__main__":
    num_strings = int(input())
    input_strings = input().split()

    output = concatenate(input_strings.split())
    print(output)