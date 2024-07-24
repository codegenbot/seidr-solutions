from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    print(filter_by_prefix(["apple", "banana", "apricot"], "a"))
    # Expected output: ['apple', 'apricot']

    print(filter_by_prefix(["hello", "world"], "z"))
    # Expected output: []

    print(filter_by_prefix([], ""))
    # Expected output: []


print([s for s in ["apple", "banana", "apricot"] if s.startswith("a")])
# ['apple', 'apricot']

print([s for s in ["hello", "world"] if s.startswith("z")])
# []

print([s for s in [] if s.startswith("")])
# []