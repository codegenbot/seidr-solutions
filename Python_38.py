def decode_cyclic(input_str):
    decoded_str = ""
    for char in input_str:
        decoded_str += chr((ord(char) - 3 - ord('a')) % 26 + ord('a'))
    return decoded_str

def get_valid_string():
    while True:
        input_str = input("Enter a string: ").lower().strip()
        if len(input_str) % 3 == 0 and input_str.isalpha() and len(input_str) > 0:
            return input_str
        print("Invalid input. Please enter a non-empty string with a length multiple of 3 containing only alphabetic characters.")

def check(decode_cyclic):
    input_str = get_valid_string()
    decoded_str = decode_cyclic(input_str)
    print("Decoded string:", decoded_str)

check(decode_cyclic)