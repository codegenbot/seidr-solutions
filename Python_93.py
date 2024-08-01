def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            shift = {"a": "c", "e": "g", "i": "k", "o": "q", "u": "w"}
            result += shift.get(
                char.lower(),
                (
                    "T"
                    if char.islower() and not char.isdigit()
                    else "t" if char.lower() == "t" else "T"
                ),
            )
        else:
            result += char
    return result


print(encode(input("Enter your message: ")))