# Task Description: Read a list of integers from the user input and calculate the sum of the list.
# Function Signature: def calculate_sum(input_list: List[int]) -> int

try:
    input_list = list(map(int, input().strip().split()))
    result = sum(input_list)
    print(result)
except:
    print("Invalid input. Please enter space-separated integers.")