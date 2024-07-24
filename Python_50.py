```Python
def decode_shift():
    s = input("Enter the encoded string: ")
    return "".join([chr(((ord(ch.lower()) - ord('a')) % 26) + ord('a')) if ch.isalpha() else ch for ch in s])