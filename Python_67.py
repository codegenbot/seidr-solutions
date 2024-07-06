count_apples = 0
for word in words:
    if "apples" in word:
        count_apples += int("".join(filter(str.isdigit, word)))
if not count_apples:
    return n - 0
return n - count_apples