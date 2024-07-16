def sum_product(numbers):
    return sum(numbers), numbers[0] * numbers[1]

results = []

while True:
    numbers_input = input().strip()
    if not numbers_input:
        break
    numbers_input = list(map(int, numbers_input.split()))
    result = sum_product(numbers_input)
    results.append(result)

for result in results:
    print(result)