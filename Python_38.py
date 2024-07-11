def decode_cyclic(input_str):
    decoded_str = ""
    for char in input_str:
        if char == "0":
            decoded_str += "5"
        elif char == "1":
            decoded_str += "2"
        elif char == "5":
            decoded_str += "0"
        elif char == "2":
            decoded_str += "1"
    return decoded_str

def check():
    user_input = input("Enter your input: ")
    if decode_cyclic(user_input) == user_input:
        print("Input is correct.")
    else:
        print("Input is incorrect.")

check()