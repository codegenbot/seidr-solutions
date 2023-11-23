from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    if not numbers or any(num < 0 for num in numbers):
        return []
    return list(set(numbers))


input_str = input("Enter numbers separated by spaces: ").strip()
input_list = list(map(int, input_str.split()))

result = remove_duplicates(input_list)
print(*result)