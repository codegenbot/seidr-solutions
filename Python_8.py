def sum_product(numbers):
    return sum(numbers) * numbers[0]

results = []

try:
    while True:
        numbers_input = list(map(int, input().strip().split()))
        if not numbers_input or numbers_input == [-1]:
            break
        result = sum_product(numbers_input)
        results.append(result)
except EOFError:
    pass

for result in results:
    print(result)