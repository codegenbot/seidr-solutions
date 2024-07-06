```Python
def sorted_list_sum(lst):
    even_words = [word for word in lst[0] if len(str(word)) % 2 == 0]
    return sorted([int("".join(filter(str.isdigit, str(word)))) if "".join(filter(str.isdigit, str(word))) != "" else word for word in even_words])

input_lst = input("Enter list of words: ")
print(sorted_list_sum(map(str.split, [[input().split()]])[0]))