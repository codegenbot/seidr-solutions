if __name__ == "__main__":
    while True:
        response = input("Do you want to calculate? (yes/no): ")
        if response.lower() == "yes":
            calculate()
            break
        elif response.lower() != "no":
            print("Please enter 'yes' or 'no'.")