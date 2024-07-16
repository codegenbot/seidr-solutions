def sum_product(numbers):
    if len(numbers) < 1:
        return None
    return sum(numbers) * numbers[0]

results = []

try:
    while True:
        try:
            numbers_input = list(map(int, input().strip().split()))
        except (ValueError, EOFError):
            break
        if not numbers_input or -1 in numbers_input:
            break
        result = sum_product(numbers_input)
        results.append(result)
except EOFError:
    pass

for result in results:
    print(result)