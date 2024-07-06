def find_zero(xs):
    for i in range(len(xs)):
        if xs[i] == 0:
            return True
    return False

user_input = int(input("Enter an integer: "))
find_zero(user_input)