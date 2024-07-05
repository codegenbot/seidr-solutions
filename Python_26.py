from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    numbers = list(map(int, input().split()))
    result = remove_duplicates(numbers)
    print(result)