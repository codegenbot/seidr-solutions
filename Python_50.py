```
def main():
    direction = input("Enter 'encode' or 'decode': ")
    while True:
        if direction in ["encode", "decode"]:
            print(decode_shift(direction))
            break
        else:
            direction = input("Invalid input. Enter 'encode' to encode or 'decode' to decode: ")