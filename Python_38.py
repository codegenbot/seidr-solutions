Here is the modified code:

```Python
def encode_cyclic(s):
    result = ""
    i = 0
    while i < len(s):
        if i < len(s) - 2 and s[i] == s[i+1] == s[i+2]:
            result += s[i] * 3
            i += 3
        else:
            result += s[i]
            i += 1
    return result

def decode_cyclic(s):
    result = ""
    i = 0
    while i < len(s):
        if i < len(s) - 2 and s[i] * 3 == s[:3]:
            result += s[i]
            i += 3
        else:
            result += s[i]
            i += 1
    return result

if __name__ == "__main__":
    user_input = input("Enter your string: ")
    
    encoded_output = encode_cyclic(user_input)
    print("Encoded output:", encoded_output)

    decoded_output = decode_cyclic(encoded_output)
    print("Decoded output:", decoded_output)