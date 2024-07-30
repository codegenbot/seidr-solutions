if __name__ == "__main__":
    s = input().strip()
    encoded_output = encode_cyclic(s)
    print(encoded_output)
    
    s = input().strip()
    decoded_output = decode_cyclic(s)
    print(decoded_output)