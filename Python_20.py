try:
    input_numbers = [int(x) for x in input().split()]
    if len(input_numbers) >= 2:
        output = find_min_difference(input_numbers)
        print(output)
except (EOFError, ValueError):
    pass