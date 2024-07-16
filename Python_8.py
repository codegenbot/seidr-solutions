def sum_product(numbers):
    if len(numbers) < 2:
        return None
    return sum(numbers) * numbers[0]

results = []

try:
    while True:
        numbers_input = list(map(int, input().strip().split()))
        if not numbers_input or numbers_input[0] == -1:
            break
        result = sum_product(numbers_input)
        results.append(result)
except EOFError:
    pass

for result in results:
    print(result)