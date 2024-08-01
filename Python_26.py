from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in set(numbers) if numbers.count(num) == 1]
    
# Read input from user
numbers = list(map(int, input().split()))

# Call the function with the input and print the output
print(remove_duplicates(numbers))