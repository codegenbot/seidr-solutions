from typing import List, Any

def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

# receive input from user
input_str = input("Enter a list of values: ")
values = [int(x) for x in input_str.split()]

# call the filter_integers function with the user input
result = filter_integers(values)

# print the filtered integers
print(result)