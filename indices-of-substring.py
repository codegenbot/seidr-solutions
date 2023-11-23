import re
text = input()
target = input()
clean_target = re.sub(r'[^\w\s]', '', target)
clean_text = re.sub(r'[^\w\s]', '', text)
indices = [i for i in range(len(text) - len(target) + 1) if clean_text[i : i + len(clean_target)] == clean_target]
print(len(indices))