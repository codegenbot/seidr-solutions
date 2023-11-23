from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    min_diff = float('inf')
    closest_pair = ()
    for i in range(len(numbers) - 1):
        diff = numbers[i+1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i+1])
    return closest_pair

input_numbers = []
num_count = int(input("Enter the number of elements: "))
for _ in range(num_count):
    number = float(input("Enter a number: "))
    input_numbers.append(number)

result = find_closest_elements(input_numbers)
print(result)