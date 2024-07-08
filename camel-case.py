```
words = s.replace('-', ' ').split()
return ''.join(word.capitalize() if i > 0 else words[0].lower() + words[1:].join(map(str.capitalize)) for i, word in enumerate(words)).replace(' ', '')