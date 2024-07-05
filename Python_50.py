
# You can use a Python library such as `click` to prompt the user for input and validate it against a specific format or range of values. For example, you can use the following code to prompt the user for a valid shift amount:
import click

@click.command()
@click.option("--shift", type=int, help="The number of characters to shift.")
def decode_shift(message):
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in message])
This code will prompt the user for a value between 1 and 25 (inclusive) using the `--shift` option. If the user provides an invalid value, `click` will display an error message and ask the user to re-enter a valid value.