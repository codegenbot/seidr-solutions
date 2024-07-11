```
def decode_cyclic(encoded_str):
    decoded_str = ""
    for char in encoded_str:
        if char == "0":
            decoded_str += "1"
        else:
            decoded_str += "0"
    return decoded_str


def check(encoded_str, n):
    decoded_str = decode_cyclic(encoded_str)
    return decoded_str[:n]


encoded_str = input("Enter the encoded string: ")
n = int(input("Enter an integer: "))

result = check(encoded_str, n)

print(result)