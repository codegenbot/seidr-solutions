def make_palindrome() -> str:
    string = input("Enter a string: ")
    if string == string[::-1]:
        print("The palindrome is: " + string)
    else:
        prefix = string[0]
        suffix = string[-1]
        rest = string[1:-1] + prefix + suffix
        while not rest == rest[::-1]:
            rest = prefix + rest + suffix
        print("The palindrome is: " + rest)