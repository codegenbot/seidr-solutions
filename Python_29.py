def filter_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]


while True:
    try:
        num_strings = int(input("Enter number of strings (integer): "))
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