```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'x':
                    result += 'A' if char == 'X' else 'a'
                elif char == 'Z' or char == 'z':
                    result += 'B' if char == 'Z' else 'b'
                else:
                    result += chr(ord(char) + 1)
            else:
                if char in 'abc':
                    result += 'd' if char == 'a' else ('e' if char == 'b' else 'f')
                elif char in 'def':
                    result += 'g' if char == 'd' else ('h' if char == 'e' else 'i')
                elif char in 'ghi':
                    result += 'j' if char == 'g' else ('k' if char == 'h' else 'l')
                elif char in 'jkl':
                    result += 'm' if char == 'j' else ('n' if char == 'k' else 'o')
                elif char in 'mno':
                    result += 'p' if char == 'm' else ('q' if char == 'n' else 'r')
                elif char in 'pon':
                    result += 's' if char == 'p' else ('t' if char == 'o' else 'u')
                elif char in 'stu':
                    result += 'v' if char == 's' else ('w' if char == 't' else 'x')
                elif char in 'uvwx':
                    result += 'y' if char == 'u' else ('z' if char == 'v' else 'A' if char == 'w' else 'a' if char == 'x' else 'B')
            else:
                result += char
        else:
            result += char
    return result