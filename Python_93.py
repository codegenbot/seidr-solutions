def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                continue
            elif char.lower() in "abcdeiou":
                result += chr((ord(char) - ord("a") + 3) % 26 + ord("a"))
            else:
                result += "T" if char.islower() and not char.isdigit() else "t"
        else:
            result += char
    return result


message = input("Enter the message: ")
print(encode(message))