from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

input_list = list(map(int, input("Enter space-separated numbers: ").split()))
result = remove_duplicates(input_list)
print(*result)