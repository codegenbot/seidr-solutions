```
def main():
    direction = input("Enter 'encode' to encode or 'decode' to decode: ")
    
    if direction in ["encode", "decode"]:
        print(decode_shift(direction))
    else:
        print("Invalid input.")