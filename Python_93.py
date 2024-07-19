def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if (
                char.lower() == "a"
                or char.lower() == "e"
                or char.lower() == "i"
                or char.lower() == "o"
                or char.lower() == "u"
            ):
                new_char = chr((ord(char) - ord("a") + 2) % 26 + ord("a"))
            else:
                if char.isupper():
                    new_char = chr((ord(char) - ord("A") + 2) % 26 + ord("A"))
                else:
                    new_char = chr((ord(char) - ord("a") + 2) % 26 + ord("a"))
            result += new_char
        else:
            result += char
    return result