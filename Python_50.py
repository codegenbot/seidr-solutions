@click.command()
def decode_shift(message, shift):
    return "".join(
        [chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message]
    )