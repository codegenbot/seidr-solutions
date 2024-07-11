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
                    result += chr(ord(char) - 32)
        else:
            result += char
    return result.replace("c", vowel_map['a']).replace("g", vowel_map['e']).replace("k", vowel_map['i']).replace("q", vowel_map['o']).replace("u", vowel_map['u'])