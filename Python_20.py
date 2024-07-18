try:
    input_numbers = [int(x) for x in input().strip().split(',')]
    output = find_min_difference(input_numbers)
    print(output)
except EOFError:
    pass