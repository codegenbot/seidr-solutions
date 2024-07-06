```
def sorted_list_sum(lst):
    even_words = [word for word in lst if len(str(word)) % 2 == 0]
    return sorted([int("".join(filter(str.isdigit, word))) if "".join(filter(str.isdigit, word)) != "" else word for word in even_words])

text = input().replace("\n", " ").strip()
words = text.split() if text else []
print(sorted_list_sum(words) if words else 'No valid input found')