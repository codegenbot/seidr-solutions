def decode_cyclic():
    encoded_str = bytes.fromhex(input("Enter the encoded string (in hexadecimal format): "))
    while True:
        try:
            key = int(input("Enter the decryption key: "), 16)
            break
        except ValueError:
            print("Invalid input. Please enter a hexadecimal number for the encryption key.")

    if len(encoded_str) % (len(encoded_str) // 2) != 0:
        return str(len(encoded_str)) + " " + str(len(encoded_str) // 2)

    decoded_str = ""
    n = len(encoded_str) // 2
    while n % 2 != 0:
        n //= 2

    if len(encoded_str) % n != 0:
        if encoded_str[:n].hex() == "1" * (n//4) and key % 2 != 0:  
            encoded_str = bytes.fromhex("0" + encoded_str.hex())
        elif encoded_str[:n].hex() != "1" * (n//4) and key % 2 == 0:   
            encoded_str = bytes.fromhex("1" + encoded_str.hex())

    for i in range(0, len(encoded_str), n):
        bits = encoded_str[i : i + n]
        if bits[0].hex() == "1":
            decoded_str += bits[1:].hex()[::-1].ljust(n*2, "0").decode()
        else:
            decoded_str += bits[1:].hex()[::-1].ljust(n*2, "0").decode()

    return decoded_str