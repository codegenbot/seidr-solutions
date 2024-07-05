def encode(message):
    vowels = 'aeiouAEIOU'
    replacements = {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q', 'u': 'w',
                    'A': 'C', 'E': 'G', 'I': 'K', 'O': 'Q', 'U': 'W'}
    encoded_message = []
    for char in message:
        if char in vowels:
            encoded_message.append(replacements[char])
        else:
            encoded_message.append(char)
    return ''.join(encoded_message)

print(encode("I DoNt KnOw WhAt tO WrItE")) 