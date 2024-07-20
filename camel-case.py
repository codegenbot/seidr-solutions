print("Please enter a string in kebab-case: ")
s = input()

def camel_case(s):
    words = s.split("-")
    return ' '.join(word.capitalize() for word in words).title().replace(' ', '')

result = ''
for line in s.splitlines():
    result += camel_case(line) + ' '

print(result.strip())