def sum_product(numbers):
    if len(numbers) < 2:
        return None
    return sum(numbers), numbers[0]


results = []

for line in iter(input, ''): 
    numbers_input = list(map(int, line.strip().split()))
    result = sum_product(numbers_input)
    if result:
        results.append(result)

for result in results:
    print(result)