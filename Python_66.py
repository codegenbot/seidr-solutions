```
def digit_sum(n):
    if n >= 10:
        return sum(int(i) for i in str(n)) + digit_sum(sum(int(i) for i in str(n)))
    else:
        return n


def main():
    while True:
        try:
            num = int(input("Enter a number: "))
            print(digit_sum(num))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")


if __name__ == "__main__":
    main()