```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = vowels.index(char.lower())
                next_index = (index + 1) % len(vowels)
                if char.isupper(): 
                    result += vowels[next_index]
                else: 
                    result += vowels[next_index].lower()
            else:
                result += 'x' if char.isalpha() else char
        else:
            result += char
    return result