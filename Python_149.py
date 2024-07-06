def sorted_list_sum(lst):
    return sum(int("".join(filter(str.isdigit, word))) if "".join(filter(str.isdigit, word)).isdigit() else 0 for word in sorted([word for word in lst if len(str(word)) % 2 == 0]))

text = input().replace("\n", " ").strip()
words = text.split() if text else []
if words:
    print(sorted_list_sum(words))
else:
    print('No valid input found')