from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    if not numbers or any(num < 0 for num in numbers):
        return []
    return list(set(numbers))


input_list = [int(input_str) for input_str in map(str.strip, iter(input, ''))]

result = remove_duplicates(input_list)
print(*result)