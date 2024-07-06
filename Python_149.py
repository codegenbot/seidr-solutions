```
def sorted_list_sum(lst):
    even_words = [word for word in lst if len(str(word)) % 2 == 0]
    return sum(int("".join(filter(str.isdigit, word))) for word in sorted(even_words))

text = input().replace("\n", " ").strip()
words = text.split() if text else []
if not words:
    print('No valid input found')
else:
    print(sorted_list_sum(words))