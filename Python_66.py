```
def digit_sum(n):
    total = 0
    while n:
        total += n % 10
        n //= 10
    return total


def main():
    while True:
        try:
            num = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    print(digit_sum(num))


if __name__ == "__main__":
    main()