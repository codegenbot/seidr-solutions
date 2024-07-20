```
print("Please enter a string in kebab-case: ")
s = input().replace("-", " ").strip()

def camel_case(s):
    words = s.split()
    return ''.join(word.capitalize() if i > 0 else word + ("" if i == len(words) - 1 else ".") for i, word in enumerate(words))

result = camel_case(s)
print(result.strip())