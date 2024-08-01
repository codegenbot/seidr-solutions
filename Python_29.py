```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if __name__ == "__main__":
        strings = ["hello", "helloworld", "goodbye"]
        prefix = "hello"
        result = filter_by_prefix(strings, prefix)
        print(result)  # Output: ['hello', 'helloworld']