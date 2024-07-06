
@click.command()
def decode_shift(message, shift):
    if not message:
        print("Please enter a valid message.")
        return
    else:
        return "".join([chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message])