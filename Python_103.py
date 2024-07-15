```Python
def main():
    while True:
        try:
            n = input("Enter first number: ")
            m = input("Enter second number: ")
            if not n.isnumeric() or not m.isnumeric():
                print("Invalid input! Please enter integer values.")
                continue
            n, m = int(n), int(m)
            if n != 0 and m != 0:
                result = rounded_avg(int(n), int(m))
                print(result)
                break
        except ValueError:
            print("Invalid input! Please enter integers.")