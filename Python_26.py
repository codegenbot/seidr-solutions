from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

input_list = list(map(int, input("Enter a list of numbers separated by space: ").split()))
result = remove_duplicates(input_list)
print(*result)