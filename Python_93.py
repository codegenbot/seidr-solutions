def encode(message):
    result = ""
    is_vowel = False
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                is_vowel = True
            else:
                is_vowel = False

            if char.isupper():
                base = 65
            else:
                base = 97

            if is_vowel:
                result += chr((ord(char) - base + 3) % 26 + base)
            else:
                if char.isupper():
                    result += chr((ord(char.lower()) - 97 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
        else:
            result += char
    return result