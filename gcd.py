def main():
    while True:
        try:
            a = int(input("Enter a number: "))
            b = int(input("Enter another number: "))
            print(gcd(a, b))
            text = input("Enter the text: ")
            target = input("Enter the target string: ")
            print(indices_of_substring(text, target))
            break
        except ValueError:
            print("Expected input: Integers only!")