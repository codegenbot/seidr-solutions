def decode_shift(s):
    if not s.isalpha() or not s.islower():
        return "Input should only contain lowercase alphabets."
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

s = input()
print(decode_shift(s))