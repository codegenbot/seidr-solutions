```
def encode(s):
    return s.upper()

def check(encoded_s):
    if encoded_s.isalpha():
        print("Encoded string is valid.")
    else:
        print("Encoded string is not valid.")

encoded = "hello"  
check(encode(encoded))