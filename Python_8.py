def input_data():
    def get_input():
        while True:
            try:
                yield input()
            except EOFError:
                break
    return get_input()

input_gen = input_data()

while True:
    try:
        numbers_input = list(map(int, next(input_gen).strip().split()))
        if not numbers_input or numbers_input[0] == -1:
            break
        result = sum_product(numbers_input)
        results.append(result)
    except (ValueError, EOFError):
        break
    except StopIteration:
        break

for result in results:
    print(result)