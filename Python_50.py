def decode_shift():
    s = input("Enter the encoded message: ").lower()
    if not s.islower():
        print("Please enter a string of lowercase letters only.")
        return

    decoded_message = "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])
    print("Decoded message:", decoded_message)

decode_shift()