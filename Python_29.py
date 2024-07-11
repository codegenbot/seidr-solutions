while True:
    try:
        while True:
            num_strings = input("Enter number of strings (integer): ")
            if num_strings.isdigit() and int(num_strings) > 0:
                break
            else:
                print("Please enter a positive integer.")

        stored_strings = [input() for _ in range(int(num_strings))]

        prefix = input("Enter prefix (string): ")
        filter_by_prefix([str(x) for x in stored_strings], prefix)
    except Exception as e:
        print(f"An error occurred: {e}")
        answer = input("Do you want to continue (yes/no)? ")
        if answer.lower() != "yes":
            sys.exit()