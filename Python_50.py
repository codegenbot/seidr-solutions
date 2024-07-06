import sys


def decode_shift(n: int) -> str:
    s = "".join(
        [chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in input().strip()]
    )
    return s


if __name__ == "__main__":
    # Get user input and decode it
    n = int(input())
    result = decode_shift(n)
    print(result)