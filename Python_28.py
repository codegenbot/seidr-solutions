from typing import List
from sys import stdin

def concatenate(strings: List[str]) -> str:
    return " ".join(strings)

if __name__ == "__main__":
    num_strings = int(input())
    input_strings = stdin.readline().split(" ")

    output = concatenate(input_strings[:num_strings])
    print(output.strip())