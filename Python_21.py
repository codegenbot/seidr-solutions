from typing import List
def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

n = int(input())
numbers = []
for i in range(n):
    num = float(input())
    numbers.append(num)

scaled_numbers = rescale_to_unit(numbers)
print(scaled_numbers)