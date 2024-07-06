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
            calc_type = int(input("Enter 1 for sum or 2 for product: "))
            if calc_type in [1, 2]:
                break
            else:
                print("Invalid input. Please enter 1 or 2.")
        except ValueError:
            print("Invalid input. Please enter an integer.")
    num = int(input("Enter a number: "))
    if calc_type == 1:
        print(digit_sum(num))
    elif calc_type == 2:
        total = 1
        for digit in str(num):
            total *= int(digit)
        print(total)


if __name__ == "__main__":
    main()