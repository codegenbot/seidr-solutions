def decode_cyclic():
    while True:
        s = input("Enter a cyclically encoded string: ")
        if (
            len(s) % 3 == 0
            and all(char.isalpha() for char in s[:2])
            and all(char.isalnum() for char in s)
        ):
            decoded_str = ""
            for i in range(0, len(s), 3):
                decoded_str += chr(
                    (ord(s[i]) - ord("A")) * 3
                    + (ord(s[i + 1]) - ord("A")) % 26
                    + ord(s[i + 2])
                )
            return decoded_str
        print(
            "Invalid input! Please enter a string that can be divided evenly into groups of 3, where the first two characters are letters and the third character is either a letter or a number."
        )
    result = decode_cyclic()
    if result is not None:
        print(result)