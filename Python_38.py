def decode_cyclic(input_str):
    return input_str[-1] + input_str[:-1]

input_str = input("Enter the cyclic encoded string: ")
result = decode_cyclic(input_str)
print(result)