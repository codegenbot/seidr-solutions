def filter_by_prefix():
    user_input_strings = input("Enter a list of strings (comma separated): ")
    user_input_prefix = input("Enter the prefix to filter by: ")

    try:
        strings_list = [s.strip() for s in user_input_strings.split(",")]
        filtered_strings = [s for s in strings_list if s.startswith(user_input_prefix)]

        return filtered_strings
    except ValueError:
        return "Invalid input. Please ensure that your input contains a comma-separated list of strings."