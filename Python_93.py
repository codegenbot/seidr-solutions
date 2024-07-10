def encode(s):
    return s.upper()

def check(encoded_s):
    if encoded_s.isalpha():
        print("Encoded string is valid.")
    else:
        print("Encoded string is not valid.")

while True:
    try:
        user_input = input("Enter a string: ")
        encoded_string = encode(user_input)
        check(encoded_string)
        break
    except ValueError as e:
        print(f"Invalid input. Please enter a string. {e}")