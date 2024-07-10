if __name__ == "__main__":
    try:
        n = int(input().strip())
        if n <= 1:
            print("Please enter a positive integer greater than 1.")
        else:
            result = factorize(n)
            print(result)
    except ValueError:
        print("Please enter a valid integer.")