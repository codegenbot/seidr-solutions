from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)

if __name__ == "__main__":
    strings = input("Enter space-separated strings: ").split()
    result = concatenate(strings)
    print(result)