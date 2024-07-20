print("Please enter a string in kebab-case: ")
s = input()

def camel_case(s):
    words = s.split("-")
    return words[0] + ''.join(word.capitalize() for word in words[1:]) if len(words) > 1 else words[0]

result = ''
result += camel_case(s)

print(result.strip())