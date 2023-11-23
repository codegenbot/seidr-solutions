from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

try:
    input_list = list(map(int, input().strip().split()))
    result = remove_duplicates(input_list)
    print(*result)
except ValueError:
    print("Invalid input format. Please enter numbers separated by space.")
except EOFError:
    print("No input provided. Please enter numbers separated by space.")