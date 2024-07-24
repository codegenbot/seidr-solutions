from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    rolling_max_list = []
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list

# Prompt user for input
input_numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))

# Call the function with user input
result = rolling_max(input_numbers)
print(result)