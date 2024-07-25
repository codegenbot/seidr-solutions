def decode_cyclic(input_str):
    result = ""
    for char in input_str:
        if char.isalpha():
            if char.islower():
                result += chr(((ord(char) - 97 + 3) % 26) + 97)
            else:
                result += chr(((ord(char) - 65 + 3) % 26) + 65)
        else:
            result += char
    return result

def get_valid_string():
    while True:
        input_str = input("Enter a string: ").lower().strip()
        if len(input_str) % 3 == 0 and input_str.isalpha() and len(input_str) > 0:
            return input_str
        print("Invalid input. Please enter a non-empty string with a length multiple of 3 containing only alphanumeric characters.")