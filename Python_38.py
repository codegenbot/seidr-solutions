def decode_cyclic():
    while True:
        encoded_str = input("Enter the encoded string: ")
        key = int(input("Enter the decryption key: "))

        if len(encoded_str) % (len(encoded_str) // 2) != 0:
            return str(len(encoded_str)) + " " + str(len(encoded_str) // 2)

        decoded_str = ""
        n = len(encoded_str) // 2
        while n % 2 != 0:
            n //= 2
        if len(encoded_str) % n != 0:
            if encoded_str[:n] == "1" * n:
                encoded_str = "0" + encoded_str
            else:
                encoded_str = "1" + encoded_str

        for i in range(0, len(encoded_str), n):
            bits = encoded_str[i : i + n]
            if bits[0] == "1":
                decoded_str += bits[1:].zfill(n)[::-1]
            else:
                decoded_str += bits[1:][::-1].ljust(n, "0")

        return decoded_str