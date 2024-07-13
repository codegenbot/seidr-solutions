def main():
    while True:
        try:
            numbers = list(map(int, input("Enter space-separated numbers: ").split()))
            print(sorted(set(numbers)))
            break
        except ValueError:
            print("Invalid input! Please enter integers separated by spaces.")


if __name__ == "__main__":
    main()