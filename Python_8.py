def sum_product(numbers):
    return sum(numbers) * numbers[0]

results = []

try:
    while True:
        numbers_input = list(map(int, input().strip().split()))
        if not numbers_input or any(num < 0 for num in numbers_input):
            break
        result = sum_product(numbers_input)
        results.append(result)
except EOFError:
    pass

for result in results:
    print(result)