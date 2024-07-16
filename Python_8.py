def sum_product(numbers):
    if len(numbers) < 2:
        return None
    return sum(numbers), numbers[0]


results = []


def input_data():
    try:
        while True:
            yield input()
    except EOFError:
        pass


input_gen = input_data()

while True:
    try:
        numbers_input = list(map(int, next(input_gen).strip().split()))
        if not numbers_input:
            break
        result = sum_product(numbers_input)
        results.append(result)
    except ValueError:
        pass

for result in results:
    print(result)