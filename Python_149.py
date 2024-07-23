def sorted_list_sum(lst):
    odd_word_count = 0
    even_word_count = 0

    for word in lst:
        if len(word) % 2 == 1:
            odd_word_count += 1
        else:
            even_word_count += 1

    print(f"Number of words with odd length: {odd_word_count}")
    print(f"Number of words with even length: {even_word_count}")


user_input = input("Please enter a list of words separated by commas: ")

words_list = [word.strip() for word in user_input.split(",")]
sorted_list_sum(words_list)