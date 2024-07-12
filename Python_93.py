def encode(message):
    vowels = "aeiouAEIOU"
    translated_message = ""
    for char in message:
        if char in vowels:
            index = (vowels.index(char) + 2) % len(vowels)
            translated_message += vowels[index]
        else:
            translated_message += char.swapcase()
    return translated_message