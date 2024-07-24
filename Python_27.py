def flip_case(char):
    return char.upper() if char.islower() else char.lower()

def modify_string(string):
    return ''.join(flip_case(char) for char in string)

def check():
    string = input("Enter a string containing both upper and lower case letters: ")
    return modify_string(string)

print(check())