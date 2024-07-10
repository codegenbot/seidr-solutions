```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    vowel_index = 0
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                if char.isupper():
                    result += vowels[vowel_index].upper()
                else:
                    result += vowels[vowel_index].lower()
                vowel_index = (vowel_index + 1) % len(vowels)
            else:
                result += 'x'
        else:
            result += char
    return result