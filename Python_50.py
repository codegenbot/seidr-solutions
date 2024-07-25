def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a") ) for ch in s])

input_str = input("Enter the string to decode (lowercase only): ").strip()
while not input_str.islower() or not input_str.isalpha():
    print("Input should contain lowercase letters only.")
    input_str = input("Enter the string to decode (lowercase only): ").strip()

decoded_str = decode_shift(input_str)
print(decoded_str)