def find_min_difference(numbers):
    numbers.sort()
    return min(numbers[i+1] - numbers[i] for i in range(len(numbers) - 1))

while True:
    try:
        input_numbers = [int(x) for x in input().split()]
        if not input_numbers:
            break
        output = find_min_difference(input_numbers)
        print(output)
    except EOFError:
        break