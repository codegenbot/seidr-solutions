def check():
    encoded_str = input("Enter the encoded string: ")
    shift = int(input("Enter the shift value: "))
    print(decode(encoded_str, shift))