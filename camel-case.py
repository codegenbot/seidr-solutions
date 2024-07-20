print("Please enter a string in kebab-case: ")
s = input().replace("-", " ").strip()

def camel_case(s):
    words = s.split()
    return ''.join(word.capitalize() if i > 0 else word[0].upper() + word[1:] for i, word in enumerate(words))

result = camel_case(s)
print(result.strip())