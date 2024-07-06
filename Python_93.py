def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                char_code = {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}[
                    char.lower()
                ]
                result += char_code.upper() if char.isupper() else char_code
            elif not char.isalpha() or char.lower() not in "aeiou":
                result += char.swapcase()
        else:
            result += char