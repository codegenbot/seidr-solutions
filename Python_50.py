
def decode_shift(input_string):
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in input_string])

decode_shift("hello world")