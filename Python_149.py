def sorted_list_sum(input_list):
    even_words = [word for word in input_list if "".join(filter(str.isdigit, word))]
    odd_words = [word for word in input_list if word not in even_words]
    
    return " ".join(sorted(even_words, key=lambda x: int("".join(filter(str.isdigit, x))))) + " " .join(sorted(odd_words))