```
def encode(s):
    return s.upper()

def check(encoded_s):
    if encoded_s.isalpha():
        print("Encoded string is valid.")
    else:
        print("Encoded string contains non-alphabets.")

while True:
    try:
        user_input = input("Enter a string: ")
        if not isinstance(user_input, str):
            print("Invalid input. Please enter a string.")
            continue
        encoded_string = encode(user_input)
        check(encoded_string)
        break
    except ValueError as e:
        print(f"Invalid input. Please enter a string. {e}")