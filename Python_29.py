from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if __name__ == "__main__":
        strings = ["hello", "helloworld", "goodbye"]
        prefix = input("Enter a prefix: ")
        result = [s for s in strings if s.startswith(prefix)]
        print(result)