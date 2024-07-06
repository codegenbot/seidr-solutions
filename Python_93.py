def encode(message):
    if not char.isalnum():
        result += char
    elif char.lower() in "aeiou":
        if char.isupper():
            result += chr((ord(char) - ord("A") + 3) % 26 + ord("A"))
        else:
            result += chr((ord(char) - ord("a") + 3) % 26 + ord("a"))
    else:
        if char.isupper():
            result += chr((ord(char.lower()) - ord("a")) % 26 + ord("A"))
        else:
            result += chr((ord(char.lower()) - ord("a")) % 26 + ord("a"))