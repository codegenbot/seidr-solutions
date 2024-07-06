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
            print(digit_sum(num))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")


main()