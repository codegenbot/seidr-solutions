from typing import List

def remove_duplicates(numbers: List[int]): 
    return list(dict.fromkeys(numbers))

input_numbers = list(map(int, input("Enter numbers separated by space: ").split()))
print(remove_duplicates(input_numbers))