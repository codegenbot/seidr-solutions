import click


@click.command()
def decode_shift(message):
    message = click.prompt("Enter the message to be decoded", type=str)
    return "".join(
        [chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message]
    )