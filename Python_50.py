```
def decode_shift():
    s = input("Enter a string: ")
    if not isinstance(s, str):
        return "Invalid input. Please enter a string."
    else:
        return "".join([chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")) if 'a' <= ch.lower() <= 'z' else ch for ch in s]).upper()