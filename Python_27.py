def flip_case(char):
    if char.islower():
        return char.upper()
    else:
        return char.lower()


def check():
    string = input("Enter a string containing both upper and lower case letters: ")
    return "".join([flip_case(char) for char in string])


check()