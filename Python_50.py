import click


@click.command()
@click.option("--shift", type=int, help="The number of characters to shift.")
def decode_shift(message):
    # Prompt the user for the message to be decoded
    message = click.prompt("Enter the message to be decoded", default="")

    # Shift the characters by the specified amount
    return "".join(
        [chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message]
    )