def decode_shift():
    s = input("Enter the string to decode: ")
    if not s.isalpha() or not s.islower() and not s.isupper():
        return "Invalid input. Please enter a string containing only lowercase or uppercase alphabets."
    return "".join([chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")) if ch.islower() else chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")).upper() for ch in s])