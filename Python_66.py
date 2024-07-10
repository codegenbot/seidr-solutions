def digitSum(s):
    return sum(int(c) for c in s if c.isdigit())


if __name__ == "__main__":
    s = input("Enter a string: ")
    print(digitSum(s))