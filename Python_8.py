from typing import List, Tuple

numbers = list(map(int, input().split()))

total_sum = sum(numbers)
product = 1

for num in numbers:
    product *= num

print(total_sum, product)