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
        numbers = list(map(int, input("Enter numbers separated by spaces: ").strip().split()))
    except ValueError:
        numbers = []
    result = rolling_max(numbers)
    print(result)