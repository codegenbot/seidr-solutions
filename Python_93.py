def encode(message):
    encoded_message = ""
    vowels = ['a', 'e', 'i', 'o', 'u']
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                vowel_index = vowels.index(char.lower())
                next_vowel = vowels[(vowel_index + 1) % len(vowels)]
                encoded_message += next_vowel.upper() if char.isupper() else next_vowel
            else:
                encoded_message += chr(ord(char) + 2)
        else:
            encoded_message += char
    return encoded_message