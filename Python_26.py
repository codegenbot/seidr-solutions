from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


input_numbers = list(map(int, input("Enter numbers separated by commas: ").split(",")))
numbers = list(input_numbers)

result = remove_duplicates(numbers)
print(result)