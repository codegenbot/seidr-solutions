def sorted_list_sum(lst):
    even_words = [word for word in lst if len(str(word)) % 2 == 0]
    return sorted([int("".join(filter(str.isdigit, word))) if "".join(filter(str.isdigit, word)) != "" else word for word in even_words])

words = [[word.strip().split() for word in input().read().strip().split('\n')]]
print(sorted_list_sum(words)[0])