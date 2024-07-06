```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "do to":
                char_code = {"d": "dQnT".find("d"), "o": "dQnT".find("o"), "t": "tq".find("t"), "o": "tq".find("o")}[char.lower()]
                result += chr(char_code) if char.isupper() else chr(char_code)
            elif char.lower() in "aeiou":
                char_code = {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}[char.lower()]
                result += char_code.upper() if char.isupper() else char_code
            else:
                result += char.swapcase()
        else:
            result += char