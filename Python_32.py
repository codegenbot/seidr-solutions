def find_zero(xs):
    user_input = int(input("Enter a number: "))
    if user_input in xs:
        return xs.index(user_input)
    else:
        return -1