def digitSum(s):
    sum = 0
    for c in s:
        sum += int(c)
    return sum

def main():
    s = input("Enter a string: ")
    print(digitSum(s))

if __name__ == "__main__":
    main()