input_string = input("Enter the string to decode: ").strip().lower()
if not all(char.islower() or char.isspace() or char.isdigit() for char in input_string): 
    print("Input string must contain only lowercase alphabets, spaces, and digits.")
    exit()

decoded_string = ''
for char in input_string:
    if char.islower():
        decoded_string += chr(122 - ord(char) + 97)
    elif char.isdigit():
        decoded_string += char
    else:
        decoded_string += ' '
print(decoded_string)