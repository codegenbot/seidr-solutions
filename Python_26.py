from typing import List
from collections import Counter
import sys

def remove_duplicates(numbers: List[int]) -> List[int]:
    counter = Counter(numbers)
    return [num for num in numbers if counter[num] == 1]

if __name__ == "__main__":
    numbers = list(map(int, sys.stdin.read().split()))
    result = remove_duplicates(numbers)
    print(" ".join(map(str, result)))