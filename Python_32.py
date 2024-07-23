def main():
    x1 = float(input("Enter x1: "))
    x2 = float(input("Enter x2: "))
    y1 = float(input("Enter y1: "))
    y2 = float(input("Enter y2: "))

    def find_zero(xs):
        return -xs[1] / xs[0]

    if (x1 * y2) - (y1 * x2) == 0:
        print(
            "The line is vertical and passes through the point ({}, {})".format(x1, y1)
        )
    elif (x1 * y2) - (y1 * x2) != 0:
        x = find_zero((x1, x2))
        print("The line crosses the x-axis at the point ({})".format(x))


if __name__ == "__main__":
    main()