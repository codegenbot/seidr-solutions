input_numbers = []
try:
    while True:
        value = input().strip()
        if value == "":
            break
        input_numbers.append(float(value))
except EOFError:
    pass

output = find_closest_elements(input_numbers)
print("{:.2f} {:.2f}".format(output[0], output[1]) )