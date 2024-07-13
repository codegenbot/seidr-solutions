def main():
    while True:
        try:
            numbers = list(map(int, input("Enter space-separated numbers: ").split()))
            if len(numbers) > 0:
                print(sorted(set(numbers)))
                break
        except ValueError:
            print("Invalid input! Please enter integers separated by spaces.")