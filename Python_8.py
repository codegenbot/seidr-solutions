from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return sum(numbers), 1 if 0 in numbers else 0 if len(set(numbers)) == 1 else eval("*".join(map(str, numbers)))

results = []

try:
    while True:
        numbers = list(map(int, input().split()))
        if not numbers:
            break
        results.append(sum_product(numbers))
except:
    pass

for result in results:
    print(result)