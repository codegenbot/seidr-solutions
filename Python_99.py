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