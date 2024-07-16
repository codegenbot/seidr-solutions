def sum_product(numbers):
    return sum(numbers), numbers[0] * numbers[1]

results = []

try:
    while True:
        numbers_input = input().split()
        if not numbers_input or numbers_input == ['']:
            break
        try:
            numbers_input = list(map(int, numbers_input))
        except ValueError:
            break
        if len(numbers_input) < 2:
            continue
        result = sum_product(numbers_input)
        results.append(result)

except EOFError:
    for result in results:
        print(result)