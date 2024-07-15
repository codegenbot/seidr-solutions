def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                if char.lower() == 'a':
                    encoded_message += 'c' if char.islower() else 'C'
                elif char.lower() == 'e':
                    encoded_message += 'g' if char.islower() else 'G'
                elif char.lower() == 'i':
                    encoded_message += 'k' if char.islower() else 'K'
                elif char.lower() == 'o':
                    encoded_message += 'q' if char.islower() else 'Q'
                elif char.lower() == 'u':
                    encoded_message += 'x' if char.islower() else 'X'
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message