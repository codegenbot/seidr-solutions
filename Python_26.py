from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))


# Read input from user
numbers = list(map(int, input().split()))

# Call the function and print the result
print(remove_duplicates(numbers))