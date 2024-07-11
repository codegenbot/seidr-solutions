def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            vowel_map = {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q'}
            non_vowel_map = str.maketrans('AEIOUaeiou', vowel_map['A'] + vowel_map['E'] + vowel_map['I'] + vowel_map['O'] + 'u')
            result += char.translate(non_vowel_map)
        else:
            result += char
    return result