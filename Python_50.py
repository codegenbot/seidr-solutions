
def decode_shift(message):
    message = int(click.prompt("Enter the message to be decoded", default=""))
    shift = int(input("Enter the number of characters to shift: "))
    return "".join([chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message])