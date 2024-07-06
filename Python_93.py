def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr(ord("A") + (ord(char) - ord("A") + 2) % 26)
            else:
                result += chr(ord("a") + (ord(char) - ord("a") + 2) % 26)
        elif char.isspace():
            # Preserve spaces as-is
            result += " "
        elif char in string.punctuation:
            # Encode punctuation characters using the same algorithm as letters
            if ord(char) < ord("A"):
                result += chr(ord("A") + (ord(char) - ord("A") + 2) % 26)
            else:
                result += chr(ord("a") + (ord(char) - ord("a") + 2) % 26)
        else:
            # Preserve any other non-alphabetic characters as-is
            result += char
    return result