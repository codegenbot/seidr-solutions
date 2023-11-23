from typing import List
   
def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

input_str = input()
input_numbers = list(map(int, input_str.split()))
result = remove_duplicates(input_numbers)
print(result)