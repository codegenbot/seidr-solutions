def encode(message):
    result = ""
    is_vowel = False
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                is_vowel = True
            else:
                is_vowel = False

            base = ord('A') if char.isupper() else ord('a')

            if is_vowel:
                result += chr((ord(char) - base + 3) % 26 + base)
            else:
                if char.isupper():
                    result += chr((ord(char.lower()) - base + 3) % 26 + base).upper()
                else:
                    result += chr((ord(char) - base + 3) % 26 + base)
        else:
            result += char
    return result