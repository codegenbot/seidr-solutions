from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_so_far = float("-inf")
    result = []
    for num in numbers:
        max_so_far = max(max_so_far, num)
        result.append(max_so_far)
    return result

if __name__ == "__main__":
    try:
        raw_input = input().strip()
        if raw_input:
            numbers = list(map(int, raw_input.split()))
        else:
            numbers = []
        print(rolling_max(numbers))
    except ValueError:
        print([])