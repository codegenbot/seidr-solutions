def digitSum():
    s = input("Enter a string: ")
    return sum(int(c) for c in s if c.isdigit())