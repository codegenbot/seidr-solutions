def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "do to":
                char_code = {
                    "d": "dQnT".find("d") % 26,
                    "o": "dQnT".find("o") % 26,
                    "t": "tq".find("t"),
                    "o": "tq".find("o"),
                }[char.lower()]
                result += (
                    chr((char_code + ord("a" if char.islower() else "A")) % 26)
                    if char.isalpha()
                    else chr(char_code)
                )
            elif char.lower() in "aeiou":
                char_code = {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}[
                    char.lower()
                ]
                result += char_code.upper() if char.isupper() else char_code
            else:
                result += char.swapcase()
        else:
            result += char
    return result