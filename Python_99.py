```
def main():
    result = None
    while True:
        find_closest_number()
        response = input("Do you want to continue? (yes/no): ")
        if response.lower() != "yes":
            break

    print("Program ended.")

def find_closest_number():
    num = int(input("Enter a number: "))
    print(f"The closest integer is {num}.")

if __name__ == "__main__":
    main()