def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'x':
                    result += 'A'
                elif char == 'Y' or char == 'y':
                    result += 'B'
                else:
                    if char in ['T', 't']:
                        result += 'T'
                    elif char in ['S', 's']:
                        result += 'Sierra'
                    else:
                        result += chr(ord(char.lower()) + 1).upper()
            else:
                if char in ['a', 'e', 'i', 'o', 'u']:
                    if char == 'a':
                        result += 'Alpha'
                    elif char == 'e':
                        result += 'Echo'
                    elif char == 'i':
                        result += 'India'
                    elif char == 'o':
                        result += 'Oscar'
                    else:
                        result += 'Uniform'
                else:
                    if char in ['b', 'p']:
                        result += 'Bravo' if char.isupper() else 'bravo'
                    elif char in ['c', 'k', 'q']:
                        result += 'Charlie' if char.isupper() else 'charlie'
                    elif char in ['d', 't']:
                        result += 'Delta' if char.isupper() else 'delta'
                    elif char in ['f', 'v']:
                        result += 'Foxtrot' if char.isupper() else 'foxtrot'
                    elif char in ['g', 'j', 'w']:
                        result += 'Golf' if char.isupper() else 'golf'
                    elif char in ['h', 'l']:
                        result += 'Hotel' if char.isupper() else 'hotel'
                    elif char == 'm':
                        result += 'Mike' if char.isupper() else 'mike'
                    elif char == 'n':
                        result += 'November' if char.isupper() else 'november'
                    elif char == 'r':
                        result += 'Romeo' if char.isupper() else 'romeo'
                    elif char in ['s', 'z']:
                        result += 'Sierra' if char.isupper() else 'sierra'
                    elif char == 'x':
                        result += 'X-ray' if char.isupper() else 'x-ray'
                    else:
                        result += chr(ord(char) + 1)
        else:
            result += char
    return result