def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            shift = ord("a") - ord(char.lower())
            result += chr(
                (ord("c") + (shift % 3))
                if char.lower() == "a"
                else (
                    (ord("g") + (shift % 3))
                    if char.lower() == "e"
                    else (
                        (ord("k") + (shift % 3))
                        if char.lower() == "i"
                        else (
                            (ord("q") + (shift % 3))
                            if char.lower() == "o"
                            else (
                                (ord("w") + (shift % 3))
                                if char.lower() == "u"
                                else char
                            )
                        )
                    )
                )
            )
        else:
            result += char
    return result


print(encode(input("Enter the message: ")))