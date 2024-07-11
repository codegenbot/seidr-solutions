while True:
    try:
        num_strings_input = input("Enter number of strings (integer): ")
        num_strings = int(num_strings_input)
        
        stored_strings = [input() for _ in range(num_strings)]

        prefix = input("Enter prefix (string): ")
        filtered_strings = filter_by_prefix(stored_strings, prefix)
        if filtered_strings:
            print("\n".join(filtered_strings))
    except Exception as e:
        print(f"An error occurred: {e}")
        answer = input("Do you want to continue (yes/no)? ")
        if answer.lower() != "yes":
            import sys
            sys.exit()