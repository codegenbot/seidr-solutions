def find_zero(xs):
    for i in range(len(xs)):
        if xs[i] == 0:
            return True
    return False

user_input = input("Enter an integer: ")
find_zero([int(user_input)])