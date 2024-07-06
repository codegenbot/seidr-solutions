from click import command


@command()
def decode_shift(message):
    message = int(input("Enter the message to be decoded"))
    return "".join(
        [chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message]
    )