def find_zero(input_lines):
    xs = []
    for line in input_lines:
        xs.extend(map(float, line.split()))
    a, b = xs[-2:]
    return -b / a

# Example input
input_lines = ['2 4', '0 0', '3 6', '']
result = find_zero(input_lines)
print(result)