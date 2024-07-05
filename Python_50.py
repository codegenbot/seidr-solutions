import click


@click.command()
@click.option("--shift", type=int, help="The number of characters to shift.")
def decode_shift(message):
    message = int(click.prompt("Enter the message to be decoded", default=""))
    return "".join(
        [chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message]
    )