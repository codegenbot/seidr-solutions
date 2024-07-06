import click


@click.command()
def decode_shift(message, shift):
    decoded = [chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message]
    return "".join(decoded)