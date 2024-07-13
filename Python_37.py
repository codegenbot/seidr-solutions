def main():
    while True:
        try:
            numbers = list(map(int, input("Enter space-separated numbers: ").split()))
            if len(numbers) > 0:
                print(sorted(set(numbers)))
            else:
                print("No numbers entered")
        except ValueError:
            print("Invalid input! Please enter integers separated by spaces.")
        except Exception as e:
            print(
                f"Error: {e}. Please ensure your input is valid and formatted correctly."
            )


if __name__ == "__main__":
    main()