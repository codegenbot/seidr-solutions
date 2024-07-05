
def decode_shift(message):
    shift = click.option("--shift", type=int)
    message = int(message)
    return "".join([chr((ord(ch) - shift - ord("a")) % 26 + ord("a")) for ch in message])