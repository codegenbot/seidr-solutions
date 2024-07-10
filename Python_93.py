```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = vowels.index(char.lower())
                next_index = (index + 1) % len(vowels)
                if char.isupper():
                    result += vowels[next_index].upper()
                else:
                    result += vowels[next_index].lower()
            else:
                first_vowel_index = vowels.find(char.lower())
                if first_vowel_index != -1:
                    next_vowel_index = (first_vowel_index + 1) % len(vowels)
                    if char.isupper():
                        result += vowels[next_vowel_index].upper()
                    else:
                        result += vowels[next_vowel_index].lower()
                else:
                    result += char
        else:
            result += char
    return result