if __name__ == "__main__":
    try:
        n = int(input("Enter a number to factorize: "))
        result = factorize(n)
        print(result)
    except ValueError:
        print("Please enter a valid integer.")