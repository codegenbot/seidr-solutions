
def decode_shift(s: str) -> str:
    """
    Decode a string using the Caesar Cipher algorithm.

    The function takes a single string argument and returns a decoded
    string based on the Caesar Cipher algorithm with a shift of 5.

    Parameters:
        s (str): A string to be decoded

    Returns:
        str: A decoded string
    """
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])