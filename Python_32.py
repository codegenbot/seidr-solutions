from typing import List

def sort_integers(input_list: List[int]) -> List[int]:
    return sorted(input_list)

# Get input from user
input_list = list(map(int, input("Enter the list of integers separated by space: ").split()))

# Call the function with the input and print the sorted list
print(*sort_integers(input_list))