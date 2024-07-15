def main():
    while True:
        try:
            n = input("Enter first number: ")
            m = input("Enter second number: ")
            if n and m:
                num1 = int(n)
                num2 = int(m)
                print(rounded_avg(num1, num2))
                break
            else:
                print("Invalid input! Please enter integer values.")
        except ValueError:
            print("Invalid input! Please enter integer values.")


def rounded_avg(a, b):
    return round((a + b) / 2)


main()