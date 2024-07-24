from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if __name__ == "__main__":
        strings = ["apple", "banana", "apricot"]
        substring = "ap"
        print(filter_by_substring(strings, substring))