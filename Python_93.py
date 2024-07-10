```
def encode(message):
    vowels = 'aeiouAEIOU'
    result_vowel_map = {0: 'o', 1: 'u', 2: 'a', 3: 'e', 4: 'i', 5: 'A', 6: 'U'}
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char.lower()) + 2) % 6
                result += result_vowel_map[index].upper() if char.isupper() else result_vowel_map[index].lower()
            else:
                result += char.swapcase()
        else:
            result += char
    return result