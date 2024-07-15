def encode(message):
    return ''.join([
        chr((((ord(char.upper()) - ord('A')) + 1) % 26) + ord('A'))
        if char.isalpha() and char.lower() not in set('aeiou')
        else char.swapcase() 
        if char.isalpha() 
        else char
        for char in message.replace('\n', '').replace('\r', '')
    ])