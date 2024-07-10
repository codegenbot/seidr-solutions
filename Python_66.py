```
def digitSum():
    s = input("Enter a string: ")
    total = sum(int(c) for c in s if c.isdigit())
    print(total)

if __name__ == "__main__":
    digitSum()