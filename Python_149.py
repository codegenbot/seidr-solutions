```Python
def sorted_list_sum(lst):
    lst = [word for word in lst if len(word) % 2 == 0]
    return sorted(set(lst), key=lambda x: (len(x), x))

# Provide input from the user
user_input = input("Please enter a list of words separated by commas: ")

# Convert user input to a list and process the task
words_list = [word.strip() for word in user_input.split(",")]
sorted_list_sum(words_list)