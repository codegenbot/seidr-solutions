import click


@click.command()
def decode_shift(message, shift):
    if not message:  # Check if the input is empty or not
        print("Please enter a valid message.")
        return  # Exit the function without returning any output
    else:
        return "".join(
            [chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message]
        )