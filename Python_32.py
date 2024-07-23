def main():
    m = float(input("Enter the slope of a line: "))
    c = float(input("Enter the y-intercept of a line: "))

    x = float(
        input("Enter the value for which you want to find the corresponding y-value: ")
    )

    y = m * x + c
    print(f"The corresponding y-value is {y}.")


if __name__ == "__main__":
    main()