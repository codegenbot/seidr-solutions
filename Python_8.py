def sum_product(numbers):
    if len(numbers) < 2:
        return None
    return sum(numbers), numbers[0] * numbers[1]

results = []

while True:
    try:
        try:
            numbers_input = list(map(int, input().strip().split()))
        except EOFError:
            break
        if not numbers_input:
            break
        result = sum_product(numbers_input)
        results.append(result)
    except ValueError:
        pass

for result in results:
    print(result)