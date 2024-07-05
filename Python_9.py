from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_so_far = float("-inf")
    result = []
    for num in numbers:
        max_so_far = max(max_so_far, num)
        result.append(max_so_far)
    return result

if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()
    numbers = list(map(int, input.split()))
    result = rolling_max(numbers)
    print(" ".join(map(str, result)))