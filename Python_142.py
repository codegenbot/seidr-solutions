while True:
    response = input("Do you want to start? (yes/no): ")
    if response.lower() == "yes":
        break
    elif response.lower() == "no":
        print("Thanks for trying!")
        exit()
    else:
        print("Invalid response. Please enter 'yes' or 'no'.")