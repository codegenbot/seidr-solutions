def find_zero(xs):
    num = int(input("Enter a number: "))
    for i in range(len(xs)):
        if xs[i] == num:
            return i
    return -1
