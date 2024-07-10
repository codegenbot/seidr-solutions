def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - ord("A") + 1) % 26 + ord("A"))
            else:
                result += chr((ord(char) - ord("a") + 1) % 26 + ord("a"))
        else:
            result += char
    for char in result:
        if char.lower() in "aeiou":
            if char.isupper():
                result = result.replace(
                    char, chr((ord(char) - ord("A") + 3) % 26 + ord("A"))
                )
            else:
                result = result.replace(
                    char, chr((ord(char) - ord("a") + 3) % 26 + ord("a"))
                )
    return result