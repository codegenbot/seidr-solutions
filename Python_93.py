def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == "Z":
                    result += "A"
                else:
                    result += chr(ord(char) + 1)
            elif char.islower():
                if char == "z":
                    result += "y"
                else:
                    result += chr(ord(char) + 1)
        else:
            result += char
    for char in result:
        if char.lower() in "aeiou":
            if char.isupper():
                result = result.replace(
                    char, chr(ord("A") + ((ord(char.upper()) - ord("A")) + 2) % 26)
                )
            else:
                result = result.replace(
                    char, chr(ord("a") + ((ord(char.lower()) - ord("a")) + 2) % 26)
                )
    return result