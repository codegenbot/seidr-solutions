def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - ord('a')
                new_index = (index + 2) % 5
                if char.isupper():
                    result += chr(ord('A') + new_index)
                else:
                    result += chr(ord('a') + new_index)
            else:
                if char.isupper():
                    result += char.lower()
                else:
                    result += char.upper()
        else:
            result += char
    return result