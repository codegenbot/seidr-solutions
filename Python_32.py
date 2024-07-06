
def find_zero(xs):
    user_input = input("Enter a number: ")
    if int(user_input) in xs:
        return xs.index(int(user_input))
    else:
        return -1