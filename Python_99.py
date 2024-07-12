def find_closest_number():
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    closest_num = min(num1, num2)
    print(f"The closest number is {closest_num}")


def main():
    result = None
    while True:
        find_closest_number()
        response = input("Do you want to continue? (yes/no): ")
        if response.lower() != "yes":
            break

    print("Program ended.")


if __name__ == "__main__":
    main()