def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                result += char
            else:
                offset = ord("a") - ord(char.lower())
                result += chr(
                    (ord("c") + (offset % 3))
                    if char.lower() == "a"
                    else (
                        (ord("g") + (offset % 5))
                        if char.lower() == "e"
                        else (
                            (ord("k") + (offset % 7))
                            if char.lower() == "i"
                            else (
                                (ord("q") + (offset % 9))
                                if char.lower() == "o"
                                else (
                                    (ord("w") + (offset % 11))
                                    if char.lower() == "u"
                                    else (
                                        ord(char)
                                        if char.isupper()
                                        else ord(char).lower()
                                    )
                                )
                            )
                        )
                    )
                )
        else:
            result += char
    return result