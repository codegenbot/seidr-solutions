import sys

def sum_product(numbers):
    if len(numbers) < 2:
        return None
    return sum(numbers), numbers[0]

results = []

def input_data():
    while True:
        try:
            yield sys.stdin.readline().rstrip()
        except EOFError:
            break

input_gen = input_data()

while True:
    try:
        numbers_input = list(map(int, next(input_gen).strip().split()))
        if not numbers_input or numbers_input[0] == -1:
            break
        result = sum_product(numbers_input)
        results.append(result)
    except ValueError:
        pass

for result in results:
    print(result)