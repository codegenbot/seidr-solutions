def sum_product(numbers):
    return sum(numbers) * numbers[0]

results = []

try:
    while True:
        numbers = list(map(int, input().strip().split()))
        if not numbers:
            break
        result = sum_product(numbers)
        results.append(result)
except EOFError:
    pass

for result in results:
    print(result)