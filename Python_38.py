if __name__ == "__main__":
    s = input("Enter a string to encode: ").strip()
    encoded_output = encode_cyclic(s)
    print(encoded_output)

    s = input("Enter a string to decode: ").strip()
    decoded_output = decode_cyclic(s)
    print(decoded_output)