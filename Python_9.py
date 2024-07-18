from typing import List
def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

input_numbers = []
while True:
    num = input("Enter a number (press 'q' to stop): ")
    if num == 'q':
        break
    input_numbers.append(int(num))

print(rolling_max(input_numbers))