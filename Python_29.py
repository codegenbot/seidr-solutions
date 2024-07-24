from typing import List
def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    print(filter_by_prefix(["apple", "banana", "apricot"], "a"))
    # Expected output: ['apple', 'apricot']
    print(filter_by_prefix(["hello", "world"], "z"))
    # Expected output: []
    print(filter_by_prefix([], ""))
    # Expected output: []