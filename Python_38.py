def decode_cyclic(input_str):
    n = len(input_str)
    decoded_str = [chr((ord(input_str[i]) - ord('a') + n) % 26 + ord('a')) for i in range(n)]
    return ''.join(decoded_str)

input_str = input("Enter the cyclic encoded string: ").lower()
result = decode_cyclic(input_str)
print(result)