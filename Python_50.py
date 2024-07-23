```
def decode_shift():
    s = input("Enter a string: ")
    print("".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s]))


decode_shift()