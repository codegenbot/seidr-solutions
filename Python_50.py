def decode_shift():
    s = input("Enter the encoded message: ")
    if all(ch.islower() for ch in s):
        decoded_message = "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])
        print("Decoded message:", decoded_message)
    else:
        print("Please enter a string of lowercase letters only.")

decode_shift()