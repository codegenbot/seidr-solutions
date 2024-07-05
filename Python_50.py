
def decode_shift(message):
    shift = click.prompt("Enter a shift amount (1-25)", type=int)
    if shift < 1 or shift > 25:
        print("Invalid shift amount, please enter a value between 1 and 25")
        return None
    return "".join([chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message])