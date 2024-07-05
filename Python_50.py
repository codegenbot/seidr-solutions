import click


def read_user_input():
    message = input("Enter the message to be decoded: ")
    return message


@click.command()
@click.option("--shift", type=int, help="The number of characters to shift.")
def decode_shift(message):
    shift = int(click.prompt("Enter the number of shifts: ", default=0))
    for ch in message:
        if ord(ch) >= ord("a") and ord(ch) <= ord("z"):
            decoded_char = (ord(ch) - shift - ord("a")) % 26 + ord("a")
            print(chr(decoded_char), end="")
    print()