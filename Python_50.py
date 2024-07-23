```
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

def decode_shift():
    s = input("Enter a string: ")
    print(decode_shift(s))

decode_shift()