def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                result += "aeiou".index(char.lower()).lower() + 2 if char.isupper() else "aeiou"[ord('a') - ord('e')] % 6
            else:
                result += char.swapcase()
        else:
            result += char
    return result