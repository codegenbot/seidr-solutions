results = []

while True:
    try:
        numbers = list(map(int, input().split()))
        if len(numbers) == 0:
            break
        result = sum_product(numbers)
        results.append(result)
    except:
        break

for result in results:
    print(result)