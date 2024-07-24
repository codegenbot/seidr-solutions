def decode_shift():
    user_input = input().split()
    encoded_message = user_input[0]
    num_shifts = int(user_input[1])
    
    return "".join([chr(((ord(ch) - 97 - num_shifts) % 26) + 97)) if ch.isalpha() else ch for ch in encoded_message])

print(decode_shift())