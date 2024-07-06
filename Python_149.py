def sorted_list_sum(input_list):
    user_input = input("Enter a list of words separated by space: ").split()
    
    even_words = [word for word in user_input if "".join(filter(str.isdigit, word)) and len(word) > 1]
    odd_words = [word for word in user_input if word not in even_words or (not "".join(filter(str.isdigit, word)))]

    return " ".join(sorted(even_words, key=lambda x: int("".join(filter(str.isdigit, x))))) + " " .join(sorted(odd_words))