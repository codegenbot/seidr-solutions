import click
import sys


@click.command()
def decode_shift():
    message = sys.stdin.readline().strip()
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in message])