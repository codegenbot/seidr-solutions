```
def encode_cyclic(s: str):
    encoded_str = ""
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if len(chunk) < 3:
            chunk += "x" * (3 - len(chunk))
        encoded_str += "".join([chunk[2], chunk[1], chunk[0]])
    return encoded_str

def decode_cyclic(s: str):
    decoded_str = ""
    i = 0
    while i < len(s):
        if s[i] == s[i+1]:
            decoded_str += s[i] * 2 + s[i+2]
            i += 3
        else:
            decoded_str += s[i]
            i += 1

if __name__ == "__main__":
    user_input = input("Enter your string: ")
    
    encoded_output = encode_cyclic(user_input)
    print("Encoded output:", encoded_output)

    decoded_output = decode_cyclic(encoded_output)
    print("Decoded output:", decoded_output)