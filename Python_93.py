def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                continue
            else:
                shift = {"a": "c", "e": "g", "i": "k", "o": "q", "u": "w"}.get(
                    char.lower()
                )
                result += shift.upper() if char.isupper() else shift
        else:
            result += char
    return result


print(encode(input("Enter your message: ")))