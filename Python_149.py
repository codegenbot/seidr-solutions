def sorted_list_sum(input_list):
    while True:
        try:
            user_input = input("Enter a list of words separated by space: ").split()
            break
        except ValueError:
            print("Invalid input. Please enter words separated by spaces.")

    even_words = [word for word in user_input if "".join(filter(str.isdigit, word)).isdigit()]
    odd_words = [word for word in user_input if word not in even_words]

    if len(even_words) == 0:
        print("Error: No digits found. Please enter a valid input.")
        return sorted_list_sum(input_list)
    else:
        return " ".join(sorted(even_words, key=lambda x: int("".join(filter(str.isdigit, x))))) + " ".join(sorted(odd_words))