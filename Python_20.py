from typing import List, Tuple

def find_closest_elements(numbers: List[float], k: int) -> List[Tuple[float, float]]:
    numbers.sort()
    closest_pairs = []

    for i in range(len(numbers) - 1):
        diff = abs(numbers[i + 1] - numbers[i])
        closest_pairs.append((numbers[i], numbers[i + 1]))

    closest_pairs = sorted(closest_pairs, key=lambda x: x[0])
    return closest_pairs[:k]

numbers = [1.5, 2.3, 0.8, 4.2, 3.1]
k = 2
result = find_closest_elements(numbers, k)
print(result)