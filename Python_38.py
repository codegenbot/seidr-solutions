
def decode_cyclic(s):
    while len(s) % 3 != 0 or not s.isdigit():
        print("Invalid input. Please enter a cyclic string of length 3n.")
        s = input("Enter a cyclic string to decode: ")
    return _decode_cyclic(s)