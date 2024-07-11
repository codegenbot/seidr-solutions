```
def encode_cyclic(s):
    result = ""
    i = 0
    while i < len(s):
        if len(s) - i >= 2:
            if s[i+1] == s[i]:
                result += s[i]*2 + s[(i+2)%len(s)]
                i += 3
            else:
                result += s[i]
                i += 1
        elif len(s) - i == 1:
            result += s[i]
            i += 1
        else:
            result += s[i]
            i += 1
    return result

def decode_cyclic(s):
    groups = []
    for i in range(0, (len(s) + 2) // 3):
        if i * 3 + 3 > len(s):
            groups.append(s[i * 3:])
        else:
            groups.append(s[(i*3):min((i*3)+3, len(s))])
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

if __name__ == "__main__":
    user_input = input("Enter your string: ")
    
    encoded_output = encode_cyclic(user_input)
    print("Encoded output:", encoded_output)

    decoded_output = decode_cyclic(encoded_output)
    print("Decoded output:", decoded_output)