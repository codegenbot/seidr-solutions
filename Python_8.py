def sum_product(numbers):
    return sum(numbers), numbers[0] * numbers[1]

results = []

while True:
    numbers_input = list(map(int, input().strip().split()))
    if len(numbers_input) < 2:
        break
    result = sum_product(numbers_input)
    results.append(result)

for result in results:
    print(result)