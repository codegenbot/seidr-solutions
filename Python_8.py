def sum_product(numbers):
    return sum(numbers), numbers[0] * numbers[1]

results = []

try:
    while True:
        try:
            numbers_input = list(map(int, input().strip().split()))
        except ValueError:
            break
        if not numbers_input or len(numbers_input) < 2:
            break
        result = sum_product(numbers_input)
        results.append(result)
except EOFError:
    pass

for result in results:
    print(result)