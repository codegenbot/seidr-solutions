def encode(message):
    vowels = {v.lower(): v.upper() for v in "aeiou"}
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                char_code = vowels[char.lower()]
                result += char_code if char.isupper() else char_code.lower()
            else:
                result += char.swapcase()
        else:
            result += char