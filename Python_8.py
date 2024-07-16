def sum_product(numbers):
    return sum(numbers), numbers[0] * numbers[1]

results = []

try:
    while True:
        try:
            numbers_input = list(map(int, input().strip().split()))
            if len(numbers_input) < 2:
                break
            result = sum_product(numbers_input)
            results.append(result)
        except ValueError:
            break
except EOFError:
    pass

for result in results:
    print(result)