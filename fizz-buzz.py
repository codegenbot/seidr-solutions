```Python
def main():
    def fizz_buzz(x):
        if x % 15 == 0:
            return "FizzBuzz"
        elif x % 3 == 0:
            return "Fizz"
        elif x % 5 == 0:
            return "Buzz"
        else:
            return str(x)

    x = int(input("Enter an integer: "))
    print(fizz_buzz(x))

if __name__ == "__main__":
    main()