```
if __name__ == "__main__":
    if len(sys.argv) > 1:
        user_input = sys.argv[1]
        encoded = encode_cyclic(user_input)
        print(f"Encoded: {encoded}")
        decoded = decode_cyclic(encoded)
        print(f"Decoded: {decoded}")