```
text = input().replace("\n", " ").strip()
words = text.split() if text else []
if words:
    result = []
    for word in words:
        try:
            int_word = int(word)
            result.append(int_word)
        except ValueError:
            continue
    print(sorted_list_sum(result))
else:
    print('No valid input found')