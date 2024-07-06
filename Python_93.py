def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.lower() == 'a':
                    result += 'c' if char.islower() else 'C'
                elif char.lower() == 'e':
                    result += 'g' if char.islower() else 'G'
                elif char.lower() == 'i':
                    result += 'k' if char.islower() else 'K'
                elif char.lower() == 'o':
                    result += 'q' if char.islower() else 'Q'
                elif char.lower() == 'u':
                    result += 'y' if char.islower() else 'Y'
            else:
                if ord(char) not in (ord('a'), ord('e'), ord('i'), ord('o'), ord('u')):
                    if char.islower():
                        result += chr(ord(char)+3)
                    else:
                        result += chr(ord(char)-3).upper()
        else:
            result += char  
    return result