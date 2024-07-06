```
return sum(int(''.join(filter(str.isdigit, word))) or 0 if ''.join(filter(str.isdigit, word)) else 0 for word in sorted(even_words))