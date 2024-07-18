try:
    input_numbers = list(map(int, input().strip().split()))
    output = find_min_difference(input_numbers)
    print(output)
except ValueError:
    pass