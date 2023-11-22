from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


input_numbers = input("Enter a list of numbers separated by space: ").split()
input_numbers = [int(num) for num in input_numbers]
result = remove_duplicates(input_numbers)
print(result)