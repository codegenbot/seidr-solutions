from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_so_far = float("-inf")
    result = []
    for num in numbers:
        max_so_far = max(max_so_far, num)
        result.append(max_so_far)
    return result

if __name__ == "__main__":
    input_data = input().strip()
    if input_data:
        numbers = list(map(int, input_data.split()))
        print(rolling_max(numbers))
    else:
        print([])