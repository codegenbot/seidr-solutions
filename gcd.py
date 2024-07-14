```
def main():
    global math

    text = input("Enter the text: ")
    target = input("Enter the target string: ")

    print(find_indices(text, target))

    if input("Do you want to find GCD? (yes/no): ").lower() == "yes":
        first_number = int(input("Enter the first number: "))
        second_number = int(input("Enter the second number: "))
        print(f"GCD: {math.gcd(first_number, second_number)}")