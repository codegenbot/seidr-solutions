from typing import List

def rescale_to_unit():
    numbers = [float(num) for num in input().split()]
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

result = rescale_to_unit()
print(result)