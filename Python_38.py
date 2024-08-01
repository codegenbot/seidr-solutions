def decode_cyclic(encoded_str):
    return encoded_str[-1] + encoded_str[:-1]

input_str = input("Enter the cyclic encoded string: ")
result = decode_cyclic(input_str)
print(result)