def encode(message):
    vowel_map = {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q'}
    non_vowel_map = str.maketrans('AEIOUaeiou', vowel_map['A'] + vowel_map['E'] + vowel_map['I'] + vowel_map['O'] + 'u')
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.lower() == 'a':
                    result += 'c'
                elif char.lower() == 'e':
                    result += 'g'
                elif char.lower() == 'i':
                    result += 'k'
                elif char.lower() == 'o':
                    result += 'q'
                else:
                    result += 'u'
            else:
                if char.isupper():
                    result += chr(ord(char) + 32)
                else:
                    result += char.translate(non_vowel_map)
        else:
            result += char
    return result