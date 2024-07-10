```
def encode(s):
    return s.upper()

def check(encoded_s):
    if encoded_s.isalpha():
        print("Encoded string is valid.")
    else:
        print("Encoded string is not valid.")

while True:
    try:
        encoded = input("Enter a string: ")
        check(encode(encoded))
        break
    except ValueError:
        print("Invalid input. Please enter a string.")