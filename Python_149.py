def sorted_list_sum():
    user_input = input("Enter a list of words separated by space: ").split()
    even_words = [word for word in user_input if "".join(filter(str.isdigit, word))]
    odd_words = [word for word in user_input if word not in even_words]
    
    return " ".join(sorted(even_words, key=lambda x: int("".join(filter(str.isdigit, x))))) + " " .join(sorted(odd_words))