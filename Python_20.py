input_numbers = list(map(float, input().split()))
output = find_closest_elements(input_numbers)
print("{:.2f} {:.2f}".format(output[0], output[1]))