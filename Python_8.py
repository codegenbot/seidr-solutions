def sum_product(numbers):
    if len(numbers) < 2:
        return None
    return sum(numbers), numbers[0]

results = []

def input_data():
    return input()

while True:
    try:
        numbers_input = list(map(int, input_data().strip().split()))
        if not numbers_input or numbers_input[0] == -1:
            break
        result = sum_product(numbers_input)
        results.append(result)
    except (ValueError, EOFError):
        break

for result in results:
    print(result)