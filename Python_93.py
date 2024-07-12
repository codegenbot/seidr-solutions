```
def encode(message):
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
            elif char.isupper():
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
                    result += char.swapcase()
            else:
                result += char
        else:
            result += char
    return result