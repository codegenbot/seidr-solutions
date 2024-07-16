def sum_product(numbers):
    return sum(numbers) * numbers[0]

results = []

try:
    while True:
        try:
            numbers_input = list(map(int, input().strip().split()))
            if not numbers_input or numbers_input[0] == -1:
                break
            result = sum_product(numbers_input)
            results.append(result)
        except ValueError:
            break
except EOFError:
    pass

for result in results:
    print(result)