from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

input_str = input()
if input_str:
    input_list = [int(num) for num in input_str.split()]
    result = remove_duplicates(input_list)
    print(*result)
else:
    print("No input provided.")