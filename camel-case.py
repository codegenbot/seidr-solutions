print("Please enter a string in kebab-case: ")
s = input()

def camel_case(s):
    words = s.split("-")
    return words[0] + ''.join(word.capitalize() for word in words[1:]) if len(words) > 1 else words[0]

result = ''
for line in s.split():
    result += camel_case(line) + ' '

print(result.strip())