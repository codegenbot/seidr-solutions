def sorted_list_sum():
    lst = input("Enter a list of words separated by commas: ").split(",")
    even_words = [word for word in lst if len(word.strip()) % 2 == 0]
    even_words.sort(key=lambda x: (len(x), x))
    return " -> ".join(even_words) + " Sum of lengths: " + str(sum(len(word.strip()) for word in even_words))

print(sorted_list_sum())