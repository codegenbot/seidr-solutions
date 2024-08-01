def decode_cyclic(input_list):
    n = len(input_list)
    decoded_str = [chr((num - 97 + n) % 26 + 97) for num in input_list]
    return ''.join(decoded_str)

input_list = list(map(int, input("Enter the cyclic encoded string as list of integers separated by space: ").split()))
result = decode_cyclic(input_list)
print(result)