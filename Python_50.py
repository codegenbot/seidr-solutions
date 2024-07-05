
def decode_shift(message):
    shift = int(input("Enter a shift amount (1-25): "))
    if not 0 < shift < 26:
        print("Invalid shift amount, please enter a value between 1 and 25")
        return None
    return "".join([chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message])