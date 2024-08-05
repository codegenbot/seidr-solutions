def decode_shift():
    s = input("Enter the string to decode: ")
    if not s.isalpha() or not s.islower():
        return "Invalid input. Please enter a string containing only lowercase alphabets."
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])