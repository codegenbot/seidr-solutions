def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = vowels.index(char.lower())
                next_index = (index + 1) % len(vowels)
                result += 'aeiouAEIOU'[next_index].upper() if char.isupper() else 'aeiouAEIOU'[next_index].lower()
            else:
                result += 'x'
        else:
            result += char
    return result