# Task: Sort the given list of integers in ascending order
# Function signature: def sort_integers(input_list: List[int]) -> List[int]

from typing import List

def sort_integers(input_list: List[int]) -> List[int]:
    return sorted(input_list)

# Get input from user
input_list = list(map(int, input().split()))

# Call the function with the input and print the sorted list
print(*sort_integers(input_list))