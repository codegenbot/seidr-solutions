def get_valid_string():
    while True:
        input_str = input("Enter a string: ").lower().strip()
        if len(input_str) % 3 == 0 and input_str.isalnum() and len(input_str) > 0:
            return input_str
        print("Invalid input. Please enter a non-empty string with a length multiple of 3 containing only alphanumeric characters.")

def decode_cyclic(input_str):
    decoded_str = ""
    for i in range(0, len(input_str), 3):
        decoded_str += input_str[i+2] + input_str[i] + input_str[i+1]
    return decoded_str