def find_zero(xs):
    for i in range(len(xs)):
        if xs[i] == 0:
            return True
    return False

user_input = input("Enter a list of integers separated by spaces: ")
xs = list(map(int, user_input.split()))
find_zero(xs)