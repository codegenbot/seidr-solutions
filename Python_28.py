from typing import List

def concatenate(strings: List[str]) -> str:
    return "".join(strings)

if __name__ == "__main__":
    strings = input("Enter a list of strings (comma separated): ").split(",")
    print(concatenate([s.strip() for s in strings]))