```
def sorted_list_sum(input_string):
    words = input_string.split()
    even_length_words = [word for word in words if len(word) % 2 == 0]
    return str(sum(int(word) for word in sorted(even_length_words)))