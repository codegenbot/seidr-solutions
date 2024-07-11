import re

def indices_of_substring(text, target):
    text_cleaned = re.sub(r"[^a-zA-Z0-9 ]", "", text.lower())
    target_cleaned = re.sub(r"[^a-zA-Z0-9]", "", target.lower())

    indices = [
        i
        for i in range(len(text_cleaned) - len(target_cleaned) + 1)
        if text_cleaned[i : i + len(target_cleaned)] == target_cleaned
    ]

    return indices

text = input("Enter the text string: ")
target = input("Enter the target string: ")
result = indices_of_substring(text, target)
print(result)