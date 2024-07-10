def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                if char.isupper():
                    result += vowels[(vowels.index(char.lower()) + 1) % len(vowels)].upper()
                else:
                    result += vowels[(vowels.index(char.lower()) + 1) % len(vowels)].lower()
            else:
                result += 'x'
        else:
            result += char
    return result