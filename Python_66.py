def digitSum():
    n = int(input("Enter a number: "))
    return sum(int(digit) for digit in str(n))


def main():
    print(digitSum())


if __name__ == "__main__":
    main()