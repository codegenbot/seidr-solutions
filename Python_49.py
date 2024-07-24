class Number:
    def __init__(self, modulus):
        self.modulus = modulus

    def powermod(self, base, exponent):
        result = 1
        while exponent > 0:
            if exponent % 2 == 1:
                result = (result * base) % self.modulus
            base = (base * base) % self.modulus
            exponent = exponent // 2
        return result


def main():
    while True:
        try:
            while True:
                modulus = int(input("Enter the modulus: "))
                print("1. Calculate modular division")
                print("2. Exit")
                choice = input("Choose an option: ")
                if choice == "1":
                    base = int(input("Enter the base: "))
                    exponent = int(input("Enter the exponent: "))
                    num = Number(modulus)
                    result = num.powermod(base, exponent)
                    print(result)
                    break
                elif choice == "2":
                    return
                else:
                    print("Invalid option. Please choose 1 or 2.")
        except ValueError:
            print("Invalid input. Please enter integers.")


if __name__ == "__main__":
    main()