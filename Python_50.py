def decode_shift(input_string):
    decoded_message = ""
    for char in input_string:
        decoded_char = chr(ord(char) + 1)
        decoded_message += decoded_char
    return decoded_message

try:
    input_string = input("Please enter a string: ").strip()
except EOFError:
    print("Program did not receive expected input")
    input_string = ""
    
if not isinstance(input_string, str):
    raise ValueError("Invalid input. Please enter a valid string.")
result = decode_shift(input_string)
print(result)