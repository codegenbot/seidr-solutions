```python
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    prev_vowel_index = -1
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                vowel_index = vowels.index(char.lower())
                new_index = (vowel_index + 1) % len(vowels)
                if char.isupper():
                    result += vowels[new_index].upper()
                else:
                    result += vowels[new_index].lower()
                prev_vowel_index = vowel_index
            else:
                offset = ord('a') - ord('e')
                new_index = (vowels.index(char.lower()) + 1) % len(vowels)
                if char.isupper():
                    result += chr(ord('A') + offset + new_index)
                else:
                    result += chr(ord('a') + offset + new_index)
        else:
            result += char
    return result