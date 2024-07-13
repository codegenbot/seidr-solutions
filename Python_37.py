def main():
    while True:
        try:
            numbers = list(map(int, input("Enter space-separated numbers: ").split()))
            print(sorted(set(numbers)))
        except ValueError:
            print("Invalid input! Please enter integers separated by spaces.")
        except Exception as e:
            print(f"Error: {e}. Please ensure your input is valid and formatted correctly.")