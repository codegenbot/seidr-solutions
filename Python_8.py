def sum_product(numbers):
    if len(numbers) < 2:
        return None
    return sum(numbers), numbers[0] * numbers[1]

results = []

def input_data():
    while True:
        yield input()

input_gen = input_data()

while True:
    try:
        numbers_input = list(map(int, next(input_gen).strip().split()))
        if not numbers_input or numbers_input[0] == -1:
            break
        result = sum_product(numbers_input)
        results.append(result[0] * result[1])
    except (ValueError, EOFError):
        break
    except StopIteration:
        break

for result in results:
    print(result)