from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]


numbers = []
while True:
    try:
        num = input().strip()
        if not num:
            break
        numbers.append(float(num))
    except EOFError:
        break

result = rescale_to_unit(numbers)

print(result)