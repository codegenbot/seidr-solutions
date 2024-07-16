def sum_product(numbers):
    return sum(numbers) * max(numbers)

results = []

while True:
    try:
        numbers = list(map(int, input().strip().split()))
        if not numbers:
            break
        result = sum_product(numbers)
        results.append(result)
    except EOFError:
        break

for result in results:
    print(result)