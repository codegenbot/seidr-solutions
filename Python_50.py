def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a") ) for ch in s])

input_str = input("Enter the string to decode: ").lower().strip()
while any(not ch.islower() for ch in input_str):
    print("Input should contain lowercase letters only.")
    input_str = input("Enter the string to decode: ").lower().strip()

decoded_str = decode_shift(input_str)
print(decoded_str)