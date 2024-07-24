def find_zero(xs):
    return -xs[0] / xs[-1]

if __name__ == "__main__":
    print(find_zero([int(x) for x in input("Enter numbers separated by space: ").split()]))