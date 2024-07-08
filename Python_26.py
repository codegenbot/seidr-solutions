from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in numbers if numbers.count(num) == 1]

# Take input from the user
numbers = list(map(int, input().split()))

# Call the function to remove duplicates
result = remove_duplicates(numbers)
print(result)