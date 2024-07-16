def sum_product(numbers):
    if not numbers or len(numbers) < 2:
        return None
    return sum(numbers), numbers[0] * numbers[1]

results = []

try:
    while True:
        numbers_input = list(map(int, input().strip().split()))
        if not numbers_input:
            break
        result = sum_product(numbers_input)
        results.append(result)
except ValueError:
    pass

for result in results:
    print(result)