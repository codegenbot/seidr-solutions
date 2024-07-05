from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_so_far = float("-inf")
    result = []
    for num in numbers:
        max_so_far = max(max_so_far, num)
        result.append(max_so_far)
    return result

if __name__ == "__main__":
    raw_input = input("Enter space-separated integers: ").strip()
    numbers = list(map(int, raw_input.split())) if raw_input else []
    print(rolling_max(numbers))